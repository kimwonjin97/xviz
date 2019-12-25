/*
 * File: message.cpp
 * Author: Minjun Xu (mjxu96@gmail.com)
 * File Created: Tuesday, 17th December 2019 2:42:17 am
 */

#include "message.h"


using Json = nlohmann::json;
using namespace xviz;

Json MessageObjectToJson(std::shared_ptr<google::protobuf::Message> data) {
  if (data == nullptr) {
    throw std::runtime_error("dynamic cast from StreamSet to google::protobuf::Message error");
    return Json();
  }
  std::string json_str;
  google::protobuf::util::JsonOptions options;
  options.preserve_proto_field_names = true;
  google::protobuf::util::MessageToJsonString(*data, &json_str, options);
  return Json::parse(json_str);
}

XVIZFrame::XVIZFrame(std::shared_ptr<StreamSet> data) : data_(data) {
}

Json XVIZFrame::ToObject(bool unravel) {
  auto message_ptr = std::dynamic_pointer_cast<google::protobuf::Message>(data_);
  return MessageObjectToJson(message_ptr);
  // if (message_ptr == nullptr) {
  //   throw std::runtime_error("dynamic cast from StreamSet to google::protobuf::Message error");
  //   return Json();
  // }
  // std::string json_str;
  // google::protobuf::util::MessageToJsonString(*message_ptr, &json_str);
  // return Json(json_str);
}

std::shared_ptr<StreamSet> XVIZFrame::Data() {
  return data_;
}

// XVIZMessage::XVIZMessage(std::shared_ptr<StateUpdate> update, std::shared_ptr<Metadata> meatadata) :
//   update_(update), meatadata_(meatadata) {
// }

XVIZMessage::XVIZMessage(std::shared_ptr<Metadata> meatadata) : 
  meatadata_(meatadata), update_(nullptr) {
}

XVIZMessage::XVIZMessage(std::shared_ptr<StateUpdate> update) :
  meatadata_(nullptr), update_(update) {
}

nlohmann::json XVIZMessage::ToObject(bool unravel) {
  if (update_ != nullptr) {
    auto message_ptr = std::dynamic_pointer_cast<google::protobuf::Message>(update_);
    if (!unravel) {
      return MessageObjectToJson(message_ptr);
    }
    return MessageObjectToJson(message_ptr);
  } else if (meatadata_ != nullptr) {
    auto message_ptr = std::dynamic_pointer_cast<google::protobuf::Message>(meatadata_);
    if (!unravel) {
      return MessageObjectToJson(message_ptr);
    }
    return MessageObjectToJson(message_ptr);
  } else {
    throw std::runtime_error("no message needs to be output");
  }
  return Json();
}