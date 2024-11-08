/**
 * @author Matthew Guidry (github: mguid65)
 * @date 2024-10-11
 *
 * @cond IGNORE_LICENSE
 *
 * MIT License
 *
 * Copyright (c) 2024 Matthew Guidry
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * @endcond
 */

#ifndef MGUID_CPP_TEMPLATE_CPP_TEMPLATE_H
#define MGUID_CPP_TEMPLATE_CPP_TEMPLATE_H

#include <iostream>

namespace mguid {
inline void Print(std::ostream& os = std::cout) {
  os << R"(
   ______             ______                         __        __
  / ____/____   ____ /_  __/___   ____ ___   ____   / /____ _ / /_ ___
 / /    / __ \ / __ \ / /  / _ \ / __ `__ \ / __ \ / // __ `// __// _ \
/ /___ / /_/ // /_/ // /  /  __// / / / / // /_/ // // /_/ // /_ /  __/
\____// .___// .___//_/   \___//_/ /_/ /_// .___//_/ \__,_/ \__/ \___/
     /_/    /_/                          /_/
)" << '\n';
}
}  // namespace mguid

#endif  // MGUID_NAMEDTUPLE_H
