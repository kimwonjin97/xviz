// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "options.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace xviz {

namespace {


}  // namespace


void protobuf_AssignDesc_options_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_options_2eproto() {
  protobuf_AddDesc_options_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "options.proto");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_options_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_options_2eproto() {
}

void protobuf_AddDesc_options_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_options_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\roptions.proto\022\004xviz\032 google/protobuf/d"
    "escriptor.proto:;\n\020xviz_json_schema\022\037.go"
    "ogle.protobuf.MessageOptions\030\270\247\003 \001(\tB4\n\013"
    "com.xviz.v2B\014OptionsProtoP\001Z\004v2pb\242\002\004XVIZ"
    "\252\002\007xviz.V2b\006proto3", 178);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "options.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    54200, 9, false, false);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_options_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_options_2eproto {
  StaticDescriptorInitializer_options_2eproto() {
    protobuf_AddDesc_options_2eproto();
  }
} static_descriptor_initializer_options_2eproto_;
const ::std::string xviz_json_schema_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  xviz_json_schema(kXvizJsonSchemaFieldNumber, xviz_json_schema_default);

// @@protoc_insertion_point(namespace_scope)

}  // namespace xviz

// @@protoc_insertion_point(global_scope)
