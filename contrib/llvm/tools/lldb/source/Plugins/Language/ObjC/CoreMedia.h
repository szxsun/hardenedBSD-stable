//===-- CoreMedia.h -----------------------------------------------*- C++
//-*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef liblldb_CoreMedia_h_
#define liblldb_CoreMedia_h_

#include "lldb/Core/ValueObject.h"
#include "lldb/DataFormatters/TypeSummary.h"
#include "lldb/Utility/Stream.h"

namespace lldb_private {
namespace formatters {

bool CMTimeSummaryProvider(ValueObject &valobj, Stream &stream,
                           const TypeSummaryOptions &options);
} // namespace formatters
} // namespace lldb_private

#endif // liblldb_CF_h_
