/*
 * File: definitions.h
 * Author: Minjun Xu (mjxu96@gmail.com)
 * File Created: Saturday, 7th December 2019 2:46:43 pm
 */


#ifndef XVIZ_DEFINES_H_
#define XVIZ_DEFINES_H_

#include "proto/session.pb.h"
#include "proto/style.pb.h"

namespace xviz {

using AnnotationType = xviz::StreamMetadata::AnnotationType;
using Category = xviz::StreamMetadata::Category;
using CoordinateType = xviz::StreamMetadata::CoordinateType;
using Primitive = xviz::StreamMetadata::PrimitiveType;

// struct PurePoint {
//   double x, y, z;
//   PurePoint(double xx, double yy, double zz) :
//     x(xx), y(yy), z(zz) {}
// };

} // namespace minjun


#endif