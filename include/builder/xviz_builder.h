/*
 * File: xviz_builder.h
 * Author: Minjun Xu (mjxu96@gmail.com)
 * File Created: Tuesday, 17th December 2019 2:24:08 am
 */

#ifndef XVIZ_XVIZ_BUILDER_H_
#define XVIZ_XVIZ_BUILDER_H_

#include "base_builder.h"
#include "pose.h"
#include "primitive.h"
#include "message.h"

#include <optional>

namespace xviz {

class XVIZBuilder {
public:
  // TODO add "disabled stream var"
  XVIZBuilder(std::shared_ptr<xviz::Metadata> metadata);
  std::shared_ptr<XVIZPoseBuilder> Pose(const std::string& stream_id);
  std::shared_ptr<XVIZPrimitiveBuilder> Primitive(const std::string& stream_id);
  XVIZFrame GetData();
  XVIZMessage GetMessage();

private:
  void Reset();


  std::shared_ptr<XVIZPoseBuilder> pose_builder_{nullptr};
  std::shared_ptr<XVIZPrimitiveBuilder> primitive_builder_{nullptr};
  // TODO do I need optional?
  std::shared_ptr<Metadata> metadata_{nullptr};
};
  
} // namespace xviz



#endif