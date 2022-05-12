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

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Login.pb.h"

#include <algorithm>
#include <utility>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
#include "Log.h"
// @@protoc_insertion_point(includes)

// Fix stupid windows.h included from Log.h->Common.h
#ifdef SendMessage
#undef SendMessage
#endif

namespace Battlenet {
namespace JSON {
namespace Login {

namespace {

const ::google::protobuf::Descriptor* ErrorResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ErrorResponse_reflection_ = NULL;
const ::google::protobuf::Descriptor* FormInput_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FormInput_reflection_ = NULL;
const ::google::protobuf::Descriptor* FormInputs_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FormInputs_reflection_ = NULL;
const ::google::protobuf::Descriptor* FormInputValue_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FormInputValue_reflection_ = NULL;
const ::google::protobuf::Descriptor* LoginForm_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LoginForm_reflection_ = NULL;
const ::google::protobuf::Descriptor* LoginResult_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LoginResult_reflection_ = NULL;
const ::google::protobuf::Descriptor* LoginRefreshResult_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LoginRefreshResult_reflection_ = NULL;
const ::google::protobuf::Descriptor* GameAccountInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GameAccountInfo_reflection_ = NULL;
const ::google::protobuf::Descriptor* GameAccountList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GameAccountList_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* FormType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* AuthenticationState_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_Login_2eproto() {
  protobuf_AddDesc_Login_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Login.proto");
  GOOGLE_CHECK(file != NULL);
  ErrorResponse_descriptor_ = file->message_type(0);
  static const int ErrorResponse_offsets_[1] = {
  };
  ErrorResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ErrorResponse_descriptor_,
      ErrorResponse::default_instance_,
      ErrorResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ErrorResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ErrorResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ErrorResponse));
  FormInput_descriptor_ = file->message_type(1);
  static const int FormInput_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormInput, input_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormInput, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormInput, label_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormInput, max_length_),
  };
  FormInput_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FormInput_descriptor_,
      FormInput::default_instance_,
      FormInput_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormInput, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormInput, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FormInput));
  FormInputs_descriptor_ = file->message_type(2);
  static const int FormInputs_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormInputs, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormInputs, inputs_),
  };
  FormInputs_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FormInputs_descriptor_,
      FormInputs::default_instance_,
      FormInputs_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormInputs, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormInputs, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FormInputs));
  FormInputValue_descriptor_ = file->message_type(3);
  static const int FormInputValue_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormInputValue, input_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormInputValue, value_),
  };
  FormInputValue_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FormInputValue_descriptor_,
      FormInputValue::default_instance_,
      FormInputValue_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormInputValue, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FormInputValue, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FormInputValue));
  LoginForm_descriptor_ = file->message_type(4);
  static const int LoginForm_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginForm, platform_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginForm, program_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginForm, version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginForm, inputs_),
  };
  LoginForm_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LoginForm_descriptor_,
      LoginForm::default_instance_,
      LoginForm_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginForm, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginForm, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LoginForm));
  LoginResult_descriptor_ = file->message_type(5);
  static const int LoginResult_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResult, authentication_state_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResult, error_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResult, error_message_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResult, url_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResult, login_ticket_),
  };
  LoginResult_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LoginResult_descriptor_,
      LoginResult::default_instance_,
      LoginResult_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResult, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResult, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LoginResult));
  LoginRefreshResult_descriptor_ = file->message_type(6);
  static const int LoginRefreshResult_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginRefreshResult, login_ticket_expiry_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginRefreshResult, is_expired_),
  };
  LoginRefreshResult_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LoginRefreshResult_descriptor_,
      LoginRefreshResult::default_instance_,
      LoginRefreshResult_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginRefreshResult, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginRefreshResult, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LoginRefreshResult));
  GameAccountInfo_descriptor_ = file->message_type(7);
  static const int GameAccountInfo_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountInfo, display_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountInfo, expansion_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountInfo, is_suspended_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountInfo, is_banned_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountInfo, suspension_expires_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountInfo, suspension_reason_),
  };
  GameAccountInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GameAccountInfo_descriptor_,
      GameAccountInfo::default_instance_,
      GameAccountInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GameAccountInfo));
  GameAccountList_descriptor_ = file->message_type(8);
  static const int GameAccountList_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountList, game_accounts_),
  };
  GameAccountList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GameAccountList_descriptor_,
      GameAccountList::default_instance_,
      GameAccountList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GameAccountList));
  FormType_descriptor_ = file->enum_type(0);
  AuthenticationState_descriptor_ = file->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Login_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ErrorResponse_descriptor_, &ErrorResponse::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FormInput_descriptor_, &FormInput::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FormInputs_descriptor_, &FormInputs::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FormInputValue_descriptor_, &FormInputValue::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LoginForm_descriptor_, &LoginForm::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LoginResult_descriptor_, &LoginResult::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LoginRefreshResult_descriptor_, &LoginRefreshResult::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GameAccountInfo_descriptor_, &GameAccountInfo::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GameAccountList_descriptor_, &GameAccountList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Login_2eproto() {
  delete ErrorResponse::default_instance_;
  delete ErrorResponse_reflection_;
  delete FormInput::default_instance_;
  delete FormInput_reflection_;
  delete FormInputs::default_instance_;
  delete FormInputs_reflection_;
  delete FormInputValue::default_instance_;
  delete FormInputValue_reflection_;
  delete LoginForm::default_instance_;
  delete LoginForm_reflection_;
  delete LoginResult::default_instance_;
  delete LoginResult_reflection_;
  delete LoginRefreshResult::default_instance_;
  delete LoginRefreshResult_reflection_;
  delete GameAccountInfo::default_instance_;
  delete GameAccountInfo_reflection_;
  delete GameAccountList::default_instance_;
  delete GameAccountList_reflection_;
}

void protobuf_AddDesc_Login_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013Login.proto\022\024Battlenet.JSON.Login\"\017\n\rE"
    "rrorResponse\"N\n\tFormInput\022\020\n\010input_id\030\001 "
    "\002(\t\022\014\n\004type\030\002 \002(\t\022\r\n\005label\030\003 \002(\t\022\022\n\nmax_"
    "length\030\004 \001(\r\"k\n\nFormInputs\022,\n\004type\030\001 \002(\016"
    "2\036.Battlenet.JSON.Login.FormType\022/\n\006inpu"
    "ts\030\002 \003(\0132\037.Battlenet.JSON.Login.FormInpu"
    "t\"1\n\016FormInputValue\022\020\n\010input_id\030\001 \002(\t\022\r\n"
    "\005value\030\002 \002(\t\"{\n\tLoginForm\022\023\n\013platform_id"
    "\030\001 \002(\t\022\022\n\nprogram_id\030\002 \002(\t\022\017\n\007version\030\003 "
    "\002(\t\0224\n\006inputs\030\004 \003(\0132$.Battlenet.JSON.Log"
    "in.FormInputValue\"\244\001\n\013LoginResult\022G\n\024aut"
    "hentication_state\030\001 \002(\0162).Battlenet.JSON"
    ".Login.AuthenticationState\022\022\n\nerror_code"
    "\030\002 \001(\t\022\025\n\rerror_message\030\003 \001(\t\022\013\n\003url\030\004 \001"
    "(\t\022\024\n\014login_ticket\030\005 \001(\t\"E\n\022LoginRefresh"
    "Result\022\033\n\023login_ticket_expiry\030\001 \002(\004\022\022\n\ni"
    "s_expired\030\002 \001(\010\"\232\001\n\017GameAccountInfo\022\024\n\014d"
    "isplay_name\030\001 \002(\t\022\021\n\texpansion\030\002 \002(\r\022\024\n\014"
    "is_suspended\030\003 \001(\010\022\021\n\tis_banned\030\004 \001(\010\022\032\n"
    "\022suspension_expires\030\005 \001(\004\022\031\n\021suspension_"
    "reason\030\006 \001(\t\"O\n\017GameAccountList\022<\n\rgame_"
    "accounts\030\001 \003(\0132%.Battlenet.JSON.Login.Ga"
    "meAccountInfo*\032\n\010FormType\022\016\n\nLOGIN_FORM\020"
    "\001*H\n\023AuthenticationState\022\t\n\005LOGIN\020\001\022\t\n\005L"
    "EGAL\020\002\022\021\n\rAUTHENTICATOR\020\003\022\010\n\004DONE\020\004B\002H\002", 999);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Login.proto", &protobuf_RegisterTypes);
  ErrorResponse::default_instance_ = new ErrorResponse();
  FormInput::default_instance_ = new FormInput();
  FormInputs::default_instance_ = new FormInputs();
  FormInputValue::default_instance_ = new FormInputValue();
  LoginForm::default_instance_ = new LoginForm();
  LoginResult::default_instance_ = new LoginResult();
  LoginRefreshResult::default_instance_ = new LoginRefreshResult();
  GameAccountInfo::default_instance_ = new GameAccountInfo();
  GameAccountList::default_instance_ = new GameAccountList();
  ErrorResponse::default_instance_->InitAsDefaultInstance();
  FormInput::default_instance_->InitAsDefaultInstance();
  FormInputs::default_instance_->InitAsDefaultInstance();
  FormInputValue::default_instance_->InitAsDefaultInstance();
  LoginForm::default_instance_->InitAsDefaultInstance();
  LoginResult::default_instance_->InitAsDefaultInstance();
  LoginRefreshResult::default_instance_->InitAsDefaultInstance();
  GameAccountInfo::default_instance_->InitAsDefaultInstance();
  GameAccountList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Login_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Login_2eproto {
  StaticDescriptorInitializer_Login_2eproto() {
    protobuf_AddDesc_Login_2eproto();
  }
} static_descriptor_initializer_Login_2eproto_;
const ::google::protobuf::EnumDescriptor* FormType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FormType_descriptor_;
}
bool FormType_IsValid(int value) {
  switch(value) {
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* AuthenticationState_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AuthenticationState_descriptor_;
}
bool AuthenticationState_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

ErrorResponse::ErrorResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Battlenet.JSON.Login.ErrorResponse)
}

void ErrorResponse::InitAsDefaultInstance() {
}

ErrorResponse::ErrorResponse(const ErrorResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Battlenet.JSON.Login.ErrorResponse)
}

void ErrorResponse::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ErrorResponse::~ErrorResponse() {
  // @@protoc_insertion_point(destructor:Battlenet.JSON.Login.ErrorResponse)
  SharedDtor();
}

void ErrorResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ErrorResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ErrorResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ErrorResponse_descriptor_;
}

const ErrorResponse& ErrorResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Login_2eproto();
  return *default_instance_;
}

ErrorResponse* ErrorResponse::default_instance_ = NULL;

ErrorResponse* ErrorResponse::New() const {
  return new ErrorResponse;
}

void ErrorResponse::Swap(ErrorResponse* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata ErrorResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ErrorResponse_descriptor_;
  metadata.reflection = ErrorResponse_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int FormInput::kInputIdFieldNumber;
const int FormInput::kTypeFieldNumber;
const int FormInput::kLabelFieldNumber;
const int FormInput::kMaxLengthFieldNumber;
#endif  // !_MSC_VER

FormInput::FormInput()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Battlenet.JSON.Login.FormInput)
}

void FormInput::InitAsDefaultInstance() {
}

FormInput::FormInput(const FormInput& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Battlenet.JSON.Login.FormInput)
}

void FormInput::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  input_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  label_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  max_length_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FormInput::~FormInput() {
  // @@protoc_insertion_point(destructor:Battlenet.JSON.Login.FormInput)
  SharedDtor();
}

void FormInput::SharedDtor() {
  if (input_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete input_id_;
  }
  if (type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete type_;
  }
  if (label_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete label_;
  }
  if (this != default_instance_) {
  }
}

void FormInput::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FormInput::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FormInput_descriptor_;
}

const FormInput& FormInput::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Login_2eproto();
  return *default_instance_;
}

FormInput* FormInput::default_instance_ = NULL;

FormInput* FormInput::New() const {
  return new FormInput;
}

void FormInput::Swap(FormInput* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata FormInput::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FormInput_descriptor_;
  metadata.reflection = FormInput_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int FormInputs::kTypeFieldNumber;
const int FormInputs::kInputsFieldNumber;
#endif  // !_MSC_VER

FormInputs::FormInputs()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Battlenet.JSON.Login.FormInputs)
}

void FormInputs::InitAsDefaultInstance() {
}

FormInputs::FormInputs(const FormInputs& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Battlenet.JSON.Login.FormInputs)
}

void FormInputs::SharedCtor() {
  _cached_size_ = 0;
  type_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FormInputs::~FormInputs() {
  // @@protoc_insertion_point(destructor:Battlenet.JSON.Login.FormInputs)
  SharedDtor();
}

void FormInputs::SharedDtor() {
  if (this != default_instance_) {
  }
}

void FormInputs::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FormInputs::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FormInputs_descriptor_;
}

const FormInputs& FormInputs::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Login_2eproto();
  return *default_instance_;
}

FormInputs* FormInputs::default_instance_ = NULL;

FormInputs* FormInputs::New() const {
  return new FormInputs;
}

void FormInputs::Swap(FormInputs* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata FormInputs::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FormInputs_descriptor_;
  metadata.reflection = FormInputs_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int FormInputValue::kInputIdFieldNumber;
const int FormInputValue::kValueFieldNumber;
#endif  // !_MSC_VER

FormInputValue::FormInputValue()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Battlenet.JSON.Login.FormInputValue)
}

void FormInputValue::InitAsDefaultInstance() {
}

FormInputValue::FormInputValue(const FormInputValue& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Battlenet.JSON.Login.FormInputValue)
}

void FormInputValue::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  input_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FormInputValue::~FormInputValue() {
  // @@protoc_insertion_point(destructor:Battlenet.JSON.Login.FormInputValue)
  SharedDtor();
}

void FormInputValue::SharedDtor() {
  if (input_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete input_id_;
  }
  if (value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete value_;
  }
  if (this != default_instance_) {
  }
}

void FormInputValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FormInputValue::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FormInputValue_descriptor_;
}

const FormInputValue& FormInputValue::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Login_2eproto();
  return *default_instance_;
}

FormInputValue* FormInputValue::default_instance_ = NULL;

FormInputValue* FormInputValue::New() const {
  return new FormInputValue;
}

void FormInputValue::Swap(FormInputValue* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata FormInputValue::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FormInputValue_descriptor_;
  metadata.reflection = FormInputValue_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int LoginForm::kPlatformIdFieldNumber;
const int LoginForm::kProgramIdFieldNumber;
const int LoginForm::kVersionFieldNumber;
const int LoginForm::kInputsFieldNumber;
#endif  // !_MSC_VER

LoginForm::LoginForm()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Battlenet.JSON.Login.LoginForm)
}

void LoginForm::InitAsDefaultInstance() {
}

LoginForm::LoginForm(const LoginForm& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Battlenet.JSON.Login.LoginForm)
}

void LoginForm::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  platform_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  program_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoginForm::~LoginForm() {
  // @@protoc_insertion_point(destructor:Battlenet.JSON.Login.LoginForm)
  SharedDtor();
}

void LoginForm::SharedDtor() {
  if (platform_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete platform_id_;
  }
  if (program_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete program_id_;
  }
  if (version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete version_;
  }
  if (this != default_instance_) {
  }
}

void LoginForm::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginForm::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LoginForm_descriptor_;
}

const LoginForm& LoginForm::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Login_2eproto();
  return *default_instance_;
}

LoginForm* LoginForm::default_instance_ = NULL;

LoginForm* LoginForm::New() const {
  return new LoginForm;
}

void LoginForm::Swap(LoginForm* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata LoginForm::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LoginForm_descriptor_;
  metadata.reflection = LoginForm_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int LoginResult::kAuthenticationStateFieldNumber;
const int LoginResult::kErrorCodeFieldNumber;
const int LoginResult::kErrorMessageFieldNumber;
const int LoginResult::kUrlFieldNumber;
const int LoginResult::kLoginTicketFieldNumber;
#endif  // !_MSC_VER

LoginResult::LoginResult()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Battlenet.JSON.Login.LoginResult)
}

void LoginResult::InitAsDefaultInstance() {
}

LoginResult::LoginResult(const LoginResult& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Battlenet.JSON.Login.LoginResult)
}

void LoginResult::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  authentication_state_ = 1;
  error_code_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  error_message_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  url_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  login_ticket_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoginResult::~LoginResult() {
  // @@protoc_insertion_point(destructor:Battlenet.JSON.Login.LoginResult)
  SharedDtor();
}

void LoginResult::SharedDtor() {
  if (error_code_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete error_code_;
  }
  if (error_message_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete error_message_;
  }
  if (url_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete url_;
  }
  if (login_ticket_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete login_ticket_;
  }
  if (this != default_instance_) {
  }
}

void LoginResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginResult::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LoginResult_descriptor_;
}

const LoginResult& LoginResult::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Login_2eproto();
  return *default_instance_;
}

LoginResult* LoginResult::default_instance_ = NULL;

LoginResult* LoginResult::New() const {
  return new LoginResult;
}

void LoginResult::Swap(LoginResult* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata LoginResult::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LoginResult_descriptor_;
  metadata.reflection = LoginResult_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int LoginRefreshResult::kLoginTicketExpiryFieldNumber;
const int LoginRefreshResult::kIsExpiredFieldNumber;
#endif  // !_MSC_VER

LoginRefreshResult::LoginRefreshResult()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Battlenet.JSON.Login.LoginRefreshResult)
}

void LoginRefreshResult::InitAsDefaultInstance() {
}

LoginRefreshResult::LoginRefreshResult(const LoginRefreshResult& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Battlenet.JSON.Login.LoginRefreshResult)
}

void LoginRefreshResult::SharedCtor() {
  _cached_size_ = 0;
  login_ticket_expiry_ = GOOGLE_ULONGLONG(0);
  is_expired_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoginRefreshResult::~LoginRefreshResult() {
  // @@protoc_insertion_point(destructor:Battlenet.JSON.Login.LoginRefreshResult)
  SharedDtor();
}

void LoginRefreshResult::SharedDtor() {
  if (this != default_instance_) {
  }
}

void LoginRefreshResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginRefreshResult::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LoginRefreshResult_descriptor_;
}

const LoginRefreshResult& LoginRefreshResult::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Login_2eproto();
  return *default_instance_;
}

LoginRefreshResult* LoginRefreshResult::default_instance_ = NULL;

LoginRefreshResult* LoginRefreshResult::New() const {
  return new LoginRefreshResult;
}

void LoginRefreshResult::Swap(LoginRefreshResult* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata LoginRefreshResult::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LoginRefreshResult_descriptor_;
  metadata.reflection = LoginRefreshResult_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int GameAccountInfo::kDisplayNameFieldNumber;
const int GameAccountInfo::kExpansionFieldNumber;
const int GameAccountInfo::kIsSuspendedFieldNumber;
const int GameAccountInfo::kIsBannedFieldNumber;
const int GameAccountInfo::kSuspensionExpiresFieldNumber;
const int GameAccountInfo::kSuspensionReasonFieldNumber;
#endif  // !_MSC_VER

GameAccountInfo::GameAccountInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Battlenet.JSON.Login.GameAccountInfo)
}

void GameAccountInfo::InitAsDefaultInstance() {
}

GameAccountInfo::GameAccountInfo(const GameAccountInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Battlenet.JSON.Login.GameAccountInfo)
}

void GameAccountInfo::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  display_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  expansion_ = 0u;
  is_suspended_ = false;
  is_banned_ = false;
  suspension_expires_ = GOOGLE_ULONGLONG(0);
  suspension_reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GameAccountInfo::~GameAccountInfo() {
  // @@protoc_insertion_point(destructor:Battlenet.JSON.Login.GameAccountInfo)
  SharedDtor();
}

void GameAccountInfo::SharedDtor() {
  if (display_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete display_name_;
  }
  if (suspension_reason_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete suspension_reason_;
  }
  if (this != default_instance_) {
  }
}

void GameAccountInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GameAccountInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GameAccountInfo_descriptor_;
}

const GameAccountInfo& GameAccountInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Login_2eproto();
  return *default_instance_;
}

GameAccountInfo* GameAccountInfo::default_instance_ = NULL;

GameAccountInfo* GameAccountInfo::New() const {
  return new GameAccountInfo;
}

void GameAccountInfo::Swap(GameAccountInfo* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata GameAccountInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GameAccountInfo_descriptor_;
  metadata.reflection = GameAccountInfo_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int GameAccountList::kGameAccountsFieldNumber;
#endif  // !_MSC_VER

GameAccountList::GameAccountList()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Battlenet.JSON.Login.GameAccountList)
}

void GameAccountList::InitAsDefaultInstance() {
}

GameAccountList::GameAccountList(const GameAccountList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Battlenet.JSON.Login.GameAccountList)
}

void GameAccountList::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GameAccountList::~GameAccountList() {
  // @@protoc_insertion_point(destructor:Battlenet.JSON.Login.GameAccountList)
  SharedDtor();
}

void GameAccountList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GameAccountList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GameAccountList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GameAccountList_descriptor_;
}

const GameAccountList& GameAccountList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Login_2eproto();
  return *default_instance_;
}

GameAccountList* GameAccountList::default_instance_ = NULL;

GameAccountList* GameAccountList::New() const {
  return new GameAccountList;
}

void GameAccountList::Swap(GameAccountList* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata GameAccountList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GameAccountList_descriptor_;
  metadata.reflection = GameAccountList_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Login
}  // namespace JSON
}  // namespace Battlenet

// @@protoc_insertion_point(global_scope)