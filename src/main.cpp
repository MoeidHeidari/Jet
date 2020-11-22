/**
 * @Author: Moeid Heidari <MOEIDHEIDARI>
 * @Date:   2020-11-22T20:18:29+03:00
 * @Email:  moeidheidari@hotmail.com
 * @Project: JET
 * @Last modified by:   MOEIDHEIDARI
 * @Last modified time: 2020-11-22T22:37:24+03:00
 * @License: MIT License

Copyright (c) 2020 Moeid Heidari

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
 * @Copyright: Copyright (c) 2020 Moeid Heidari
 */
 #include <iostream>
#include "jet_assertion.h"
void assertion_handler(const char* fileName,int line, const char* message) noexcept
{
  (void) fileName;
  (void) line;
  (void) message;
  std::fprintf(stderr,"%s:%d: %s\n",__FILE__,__LINE__,message);
  std::abort();
}
 int main()
 {
   int x=5;
   JET_PRIVATE::handler=assertion_handler;
   //throw JET::JET_code_error("moeid said an error has occured");
   JET_ASSERT(x==6,"error accured hahahahhaa");
   return 0;
 }
