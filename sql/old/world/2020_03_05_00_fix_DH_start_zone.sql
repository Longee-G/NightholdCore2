/*
Fix quest 39663
Entregaba la misón en el orden incorrecto

Fix quest 39515
Entregaba la misón en el orden incorrecto

Fix NPCs
NPC textos en Ruso 99916 99917 92980            92986 97070
NPCs volando  96655 93127 99045 96420 

Fix quest 38759
Npcs 95226 No da el Item


*/

DELETE FROM `quest_template` WHERE `ID` IN (39663,39516,39515,38819,38727);
INSERT INTO `quest_template` (`ID`, `QuestType`, `QuestLevel`, `QuestMaxScalingLevel`, `QuestPackageID`, `MinLevel`, `QuestSortID`, `QuestInfoID`, `SuggestedGroupNum`, `RewardNextQuest`, `RewardXPDifficulty`, `RewardXPMultiplier`, `RewardMoney`, `RewardMoneyDifficulty`, `RewardMoneyMultiplier`, `RewardBonusMoney`, `RewardDisplaySpell1`, `RewardDisplaySpell2`, `RewardDisplaySpell3`, `RewardSpell`, `RewardHonor`, `RewardKillHonor`, `RewardArtifactXP`, `RewardArtifactXPMultiplier`, `RewardArtifactCategoryID`, `StartItem`, `Flags`, `FlagsEx`, `RewardItem1`, `RewardAmount1`, `RewardItem2`, `RewardAmount2`, `RewardItem3`, `RewardAmount3`, `RewardItem4`, `RewardAmount4`, `ItemDrop1`, `ItemDropQuantity1`, `ItemDrop2`, `ItemDropQuantity2`, `ItemDrop3`, `ItemDropQuantity3`, `ItemDrop4`, `ItemDropQuantity4`, `RewardChoiceItemID1`, `RewardChoiceItemQuantity1`, `RewardChoiceItemDisplayID1`, `RewardChoiceItemID2`, `RewardChoiceItemQuantity2`, `RewardChoiceItemDisplayID2`, `RewardChoiceItemID3`, `RewardChoiceItemQuantity3`, `RewardChoiceItemDisplayID3`, `RewardChoiceItemID4`, `RewardChoiceItemQuantity4`, `RewardChoiceItemDisplayID4`, `RewardChoiceItemID5`, `RewardChoiceItemQuantity5`, `RewardChoiceItemDisplayID5`, `RewardChoiceItemID6`, `RewardChoiceItemQuantity6`, `RewardChoiceItemDisplayID6`, `POIContinent`, `POIx`, `POIy`, `POIPriority`, `RewardTitle`, `RewardArenaPoints`, `RewardSkillLineID`, `RewardNumSkillUps`, `PortraitGiver`, `PortraitTurnIn`, `RewardFactionID1`, `RewardFactionValue1`, `RewardFactionOverride1`, `FactionCapIn1`, `RewardFactionID2`, `RewardFactionValue2`, `RewardFactionOverride2`, `FactionCapIn2`, `RewardFactionID3`, `RewardFactionValue3`, `RewardFactionOverride3`, `FactionCapIn3`, `RewardFactionID4`, `RewardFactionValue4`, `RewardFactionOverride4`, `FactionCapIn4`, `RewardFactionID5`, `RewardFactionValue5`, `RewardFactionOverride5`, `FactionCapIn5`, `RewardFactionFlags`, `RewardCurrencyID1`, `RewardCurrencyQty1`, `RewardCurrencyID2`, `RewardCurrencyQty2`, `RewardCurrencyID3`, `RewardCurrencyQty3`, `RewardCurrencyID4`, `RewardCurrencyQty4`, `AcceptedSoundKitID`, `CompleteSoundKitID`, `AreaGroupID`, `TimeAllowed`, `AllowableRaces`, `QuestRewardID`, `Expansion`, `LogTitle`, `LogDescription`, `QuestDescription`, `AreaDescription`, `QuestCompletionLog`, `PortraitGiverText`, `PortraitGiverName`, `PortraitTurnInText`, `PortraitTurnInName`, `StartScript`, `CompleteScript`, `VerifiedBuild`) VALUES 
('39663', '2', '99', '255', '0', '98', '-407', '0', '0', '38728', '5', '2.5', '150000', '5', '1', '36150', '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', '37748744', '4202496', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '890', '878', '0', '0', '18446744073709551615', '0', '0', 'On Felbat Wings', 'Grab a felbat from Illidari Whitemoon and fly up to the Fel Hammer.', 'It is time. We have dealt the Legion\'s forces a crippling blow from which they will never recover.\n\nQuickly, let us mount up and take the fight to Tyranna\'s command center.', NULL, NULL, NULL, NULL, NULL, NULL, '0', '0', '26365'),
('39516', '2', '99', '255', '0', '98', '-407', '0', '0', '0', '5', '2.5', '150000', '5', '1', '36150', '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', '39845896', '4194304', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '890', '878', '0', '0', '18446744073709551615', '0', '0', 'Cry Havoc and Let Slip the Illidari!', 'Teach the Havoc specialization to your assembled demon hunters.', 'This is why the Legion fears us. We have the ability to turn their secrets against them and in so doing become stronger than they ever can be.', NULL, NULL, NULL, NULL, NULL, NULL, '0', '0', '26365'),
('39515', '2', '98', '255', '0', '98', '-407', '0', '0', '0', '5', '2.5', '146000', '5', '1', '34650', '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', '39845896', '4194304', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '890', '878', '0', '0', '18446744073709551615', '0', '0', 'Vengeance Will Be Mine!', 'Teach the Vengeance specialization to your assembled demon hunters.', 'This is why the Legion fears us. We have the ability to turn their secrets against them and in so doing become stronger than they ever can be.\n\nQuickly, $n, teach us what you have learned.', NULL, NULL, NULL, NULL, NULL, NULL, '0', '0', '26365'),
('38819', '2', '99', '255', '721', '98', '-407', '0', '0', '0', '5', '2.5', '150000', '5', '1', '36150', '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', '37748744', '4202496', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '890', '878', '0', '0', '18446744073709551615', '0', '0', 'Their Numbers Are Legion', 'Wage war upon the Brood Queen\'s Court and the Burning Legion within the greater Inferno Peak area.', 'Yes, those devastators must be silenced, but there\'s also a great deal more to be done.\n\nDespite the odds, we\'re counting on you. The Brood Queen\'s primary leaders are in control of the volcano. They must be killed. We must smash the Legion and do anything else necessary to achieve absolute victory.', NULL, NULL, NULL, NULL, NULL, NULL, '0', '0', '26365'),
('38727', '2', '99', '255', '0', '98', '-407', '0', '0', '0', '5', '2.5', '150000', '5', '1', '36150', '0', '0', '0', '0', '0', '0', '0', '1', '0', '0', '37748744', '4202496', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '890', '878', '0', '0', '18446744073709551615', '0', '0', 'Stop the Bombardment', 'Destroy the Legion Devastators.', 'Jace\'s wards are not going to hold out much longer. We need someone to go out there and make sure those Legion devastators are destroyed.\n\n<Kayn pointedly looks at you with his spectrally-enhanced vision.>', NULL, NULL, NULL, NULL, NULL, NULL, '0', '0', '26365');

UPDATE `quest_template` SET `RewardNextQuest`='39663' WHERE (`ID`='39515');

DELETE FROM `quest_template_addon` WHERE `ID` IN (39515,39516,39663);
INSERT INTO `quest_template_addon` (`ID`, `MaxLevel`, `AllowableClasses`, `SourceSpellID`, `PrevQuestID`, `NextQuestID`, `ExclusiveGroup`, `RewardMailTemplateID`, `RewardMailDelay`, `RewardMailTitle`, `RequiredSkillID`, `RequiredSkillPoints`, `RequiredMinRepFaction`, `RequiredMaxRepFaction`, `RequiredMinRepValue`, `RequiredMaxRepValue`, `ProvidedItemCount`, `SpecialFlags`) VALUES 
('39515', '0', '0', '0', '40051', '39663', '39515', '0', '0', '', '0', '0', '0', '0', '0', '0', '0', '0'),
('39516', '0', '0', '0', '40051', '39663', '39515', '0', '0', '', '0', '0', '0', '0', '0', '0', '0', '0'),
('39663', '0', '0', '0', '39515', '0', '0', '0', '0', '', '0', '0', '0', '0', '0', '0', '0', '0');


DELETE FROM `creature_text` WHERE `Entry` = 99916;
INSERT INTO `creature_text` (`Entry`, `GroupID`, `ID`, `Text`, `Type`, `Language`, `Probability`, `Emote`, `Duration`, `Sound`, `BroadcastTextID`, `MinTimer`, `MaxTimer`, `SpellID`, `comment`) VALUES 
('99916', '0', '0', 'Plenty of souls were sacrificed here. The activator is powered.', '12', '0', '100', '273', '0', '55344', '0', '0', '0', '0', 'Sevis Brightflame to Player'),
('99916', '1', '0', 'I will move ahead and find Allari.', '12', '0', '100', '0', '0', '55346', '0', '0', '0', '0', 'Sevis Brightflame to Player');

DELETE FROM `creature_text` WHERE `Entry` = 99917;
INSERT INTO `creature_text` (`Entry`, `GroupID`, `ID`, `Text`, `Type`, `Language`, `Probability`, `Emote`, `Duration`, `Sound`, `BroadcastTextID`, `MinTimer`, `MaxTimer`, `SpellID`, `comment`) VALUES 
('99917', '0', '0', '$n, hurry! You don\'t have much time.', '12', '0', '100', '3', '0', '55345', '0', '0', '0', '0', 'Sevis Brightflame to Player'),
('99917', '1', '0', 'Sevis looks down at the dying broken mystic.', '16', '0', '100', '3', '0', '55345', '101659', '0', '0', '0', 'Sevis Brightflame to Player'),
('99917', '2', '0', 'I will see you at the final gateway.', '12', '0', '100', '1', '0', '55347', '101662', '0', '0', '0', 'Sevis Brightflame to Player');

DELETE FROM `creature_text` WHERE `Entry` = 92986 AND `GroupID` = 0;
DELETE FROM `creature_text` WHERE `Entry` = 92986 AND `GroupID` = 1;
INSERT INTO `creature_text` (`Entry`, `GroupID`, `ID`, `Text`, `Type`, `Language`, `Probability`, `Emote`, `Duration`, `Sound`, `BroadcastTextID`, `MinTimer`, `MaxTimer`, `SpellID`, `comment`) VALUES 
('92986', '0', '0', 'The Legion is here.', '12', '0', '100', '0', '0', '57388', '0', '0', '0', '0', 'Altruis the Sufferer to Player'),
('92986', '1', '0', 'Time for answers later. There are demons to kill', '12', '0', '100', '0', '0', '57339', '0', '0', '0', '0', 'Altruis the Sufferer to Player');


UPDATE `creature_template_addon` SET `bytes1`='0' WHERE (`entry`='96655');
UPDATE `creature_template_addon` SET `bytes1`='0' WHERE (`entry`='93127');
UPDATE `creature_template_addon` SET `bytes1`='0' WHERE (`entry`='99045');
UPDATE `creature_template_addon` SET `bytes1`='0' WHERE (`entry`='96420');

DELETE FROM `gameobject_template` WHERE `entry` = 244916;
INSERT INTO `gameobject_template` (`entry`, `type`, `displayId`, `name`, `IconName`, `castBarCaption`, `unk1`, `faction`, `flags`, `size`, `questItem1`, `questItem2`, `questItem3`, `questItem4`, `questItem5`, `questItem6`, `Data0`, `Data1`, `Data2`, `Data3`, `Data4`, `Data5`, `Data6`, `Data7`, `Data8`, `Data9`, `Data10`, `Data11`, `Data12`, `Data13`, `Data14`, `Data15`, `Data16`, `Data17`, `Data18`, `Data19`, `Data20`, `Data21`, `Data22`, `Data23`, `Data24`, `Data25`, `Data26`, `Data27`, `Data28`, `Data29`, `Data30`, `Data31`, `Data32`, `unkInt32`, `AIName`, `ScriptName`, `WorldEffectID`, `StateWorldEffectID`, `SpellVisualID`, `SpellStateVisualID`, `SpellStateAnimID`, `SpellStateAnimKitID`, `MaxVisible`, `IgnoreDynLos`, `MinGold`, `MaxGold`, `VerifiedBuild`) VALUES 
('244916', '10', '26854', 'Jailer Cage', 'questinteract', '', '', '0', '262176', '1', '0', '0', '0', '0', '0', '0', '2422', '38759', '0', '3000', '0', '1', '0', '0', '0', '0', '204711', '0', '0', '1', '0', '0', '0', '0', '0', '0', '1', '0', '0', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '', 'go_q38759', '0', '2100', '0', '0', '0', '9340', '0', '0', '0', '0', '20994');

DELETE FROM `gameobject_template` WHERE `entry` = 243873;
INSERT INTO `gameobject_template` (`entry`, `type`, `displayId`, `name`, `IconName`, `castBarCaption`, `unk1`, `faction`, `flags`, `size`, `questItem1`, `questItem2`, `questItem3`, `questItem4`, `questItem5`, `questItem6`, `Data0`, `Data1`, `Data2`, `Data3`, `Data4`, `Data5`, `Data6`, `Data7`, `Data8`, `Data9`, `Data10`, `Data11`, `Data12`, `Data13`, `Data14`, `Data15`, `Data16`, `Data17`, `Data18`, `Data19`, `Data20`, `Data21`, `Data22`, `Data23`, `Data24`, `Data25`, `Data26`, `Data27`, `Data28`, `Data29`, `Data30`, `Data31`, `Data32`, `unkInt32`, `AIName`, `ScriptName`, `WorldEffectID`, `StateWorldEffectID`, `SpellVisualID`, `SpellStateVisualID`, `SpellStateAnimID`, `SpellStateAnimKitID`, `MaxVisible`, `IgnoreDynLos`, `MinGold`, `MaxGold`, `VerifiedBuild`) VALUES 
('243873', '10', '29634', 'Legion Portal', 'questinteract', 'Destroying', '', '0', '262176', '1', '0', '0', '0', '0', '0', '0', '99', '0', '0', '3000', '0', '1', '0', '0', '0', '0', '190610', '0', '0', '1', '24585', '0', '0', '0', '0', '0', '1', '0', '0', '1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '', 'go_q39279', '0', '2100', '0', '50520', '0', '0', '0', '0', '0', '0', '20994');