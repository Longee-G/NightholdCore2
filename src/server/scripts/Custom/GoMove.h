/*
 *###############################################################################
 *#                                                                             #
 *# Copyright (C) 2022 Project Nighthold <https://github.com/ProjectNighthold>  #
 *#                                                                             #
 *# This file is free software; as a special exception the author gives         #
 *# unlimited permission to copy and/or distribute it, with or without          #
 *# modifications, as long as this notice is preserved.                         #
 *#                                                                             #
 *# This program is distributed in the hope that it will be useful, but         #
 *# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the      #
 *# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.    #
 *#                                                                             #
 *# Read the THANKS file on the source root directory for more info.            #
 *#                                                                             #
 *###############################################################################
 */

#ifndef GOMOVE_H
#define GOMOVE_H

#include "Define.h"
#include "ObjectGuid.h"
#include <memory>
#include <mutex>
#include <unordered_map>

class Player;
class GameObject;

class GameObjectStore
{
public:
    typedef std::mutex LockType;
    typedef std::lock_guard<LockType> WriteGuard;

    void SpawnQueAdd(ObjectGuid const& guid, uint32 entry);
    void SpawnQueRem(ObjectGuid const& guid);
    uint32 SpawnQueGet(ObjectGuid const& guid);

private:
    LockType _objectsToSpawnLock;
    std::unordered_map<ObjectGuid, uint32> objectsToSpawn;
};

class GOMove
{
public:
    static GameObjectStore Store;

    static void SendAdd(Player* player, GameObject* go);
    static void SendRemove(Player* player, ObjectGuid::LowType lowguid);
    static void SendAddonMessage(Player* player, const char* msg);

    static void DeleteGameObject(GameObject* object);
    static GameObject* GetGameObject(Player* player, ObjectGuid::LowType lowguid);
    static GameObject* SpawnGameObject(Player* player, float x, float y, float z, float o, uint32 p, uint32 entry);
    static GameObject* MoveGameObject(Player* player, float x, float y, float z, float o, uint32 p, ObjectGuid::LowType lowguid);
    static std::list<GameObject*> GetNearbyGameObjects(Player* player, float range);
};

#endif