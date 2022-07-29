/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

include "thrift/annotation/thrift.thrift"

package "test.dev/fixtures/enums"

namespace android test.fixtures.enums
namespace java test.fixtures.enums
namespace java.swift test.fixtures.enums

@thrift.GenDefaultEnumValue
enum Metasyntactic {
  FOO = 1,
  BAR = 2,
  BAZ = 3,
  BAX = 4,
}

struct SomeStruct {
  1: Metasyntactic reasonable = FOO;
  2: Metasyntactic fine = 2;
  3: Metasyntactic questionable = -1;
  4: set<i32> tags = [];
}
