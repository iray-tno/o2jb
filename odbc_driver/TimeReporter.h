#ifndef _INCLUDE_GUARD_TIME_REPORTER_H_
#define _INCLUDE_GUARD_TIME_REPORTER_H_ 1
/*
 * Copyright 2015 AnaVation, LLC. 
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

#include <iosfwd>

namespace o2jb{

class TimeReporter {
public:
	friend std::ostream& operator<<(std::ostream& out, TimeReporter const& time);
};

std::ostream& operator<<(std::ostream& out, TimeReporter const& time);

}

#endif