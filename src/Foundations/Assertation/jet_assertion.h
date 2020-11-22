/**
 * @Author: Moeid Heidari <MOEIDHEIDARI>
 * @Date:   2020-11-22T20:18:29+03:00
 * @Email:  moeidheidari@hotmail.com
 * @Project: JET
 * @Last modified by:   MOEIDHEIDARI
 * @Last modified time: 2020-11-22T20:19:02+03:00
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

 #pragma once
 #ifndef _OP_ASSERTATION
 #define _OP_ASSERTATION

 #include <functional>
 #include <stdexcept>

 //======================================================================================================
 namespace OP
 {
 	/*! /brief a function handler to handle assertation function
 	* author : Moeid Heidari.
 	*/
 	typedef std::function<void(const char* fileName,int line, const char* message)> assert_function_handler;

 	/*! /brief ithis function sets a function to the handler either by parameter of default
 		author : Moeid Heidari
 	*/
 	void set_assertation_handler(assert_function_handler handler);
 	void set_default_assertation_handler();
 	//-------------------------------------------------------------------------------------------------
 	class OP_unicode_error : public std::runtime_error
 	{
 	public:
 		explicit OP_unicode_error(const char* message) noexcept :std::runtime_error(message) {}
 	};
 	//-------------------------------------------------------------------------------------------------
 	class OP_code_error : public std::runtime_error
 	{
 	public:
 		explicit OP_code_error(const char* message) noexcept : std::runtime_error(message) {}
 	};
 	//-------------------------------------------------------------------------------------------------
 	class OP_invalid_argument : public std::invalid_argument
 	{
 	public:
 		explicit OP_invalid_argument(const char* message) noexcept :std::invalid_argument(message) {}
 	};
 }
 //======================================================================================================
 namespace OP_PRIVATE
 {
 	 OP::assert_function_handler handler;
 }
 //======================================================================================================
 #define OP_ASSERT(condition,message)\
 	do{\
 		if (!(condition))\
 			OP_PRIVATE::handler( __FILE__, __LINE__, message); \
 	}while(0)

 #endif
