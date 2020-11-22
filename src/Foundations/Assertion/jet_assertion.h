/**
 * @Author: Moeid Heidari <MOEIDHEIDARI>
 * @Date:   2020-11-22T20:18:29+03:00
 * @Email:  moeidheidari@hotmail.com
 * @Project: JET
 * @Last modified by:   MOEIDHEIDARI
 * @Last modified time: 2020-11-22T21:17:02+03:00
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
 #ifndef _JET_ASSERTATION
 #define _JET_ASSERTATION

 #include <functional>
 #include <stdexcept>

 //======================================================================================================
 namespace JET
 {
 	/*! /brief a function handler to handle assertation function
 	* author : Moeid Heidari.
 	*/
 	typedef std::function<void(const char* fileName,int line, const char* message)> assert_function_handler;

  void default_assert_handler(const char* fileName,int line, const char* message) noexcept;
 	/*! /brief ithis function sets a function to the handler either by parameter of default
 		author : Moeid Heidari
 	*/
 	void set_assertation_handler(assert_function_handler handler);
 	void set_default_assertation_handler();
 	//-------------------------------------------------------------------------------------------------
 	class JET_unicode_error : public std::runtime_error
 	{
 	public:
 		explicit JET_unicode_error(const char* message) noexcept :std::runtime_error(message) {}
 	};
 	//-------------------------------------------------------------------------------------------------
 	class JET_code_error : public std::runtime_error
 	{
 	public:
 		explicit JET_code_error(const char* message) noexcept : std::runtime_error(message) {}
 	};
 	//-------------------------------------------------------------------------------------------------
 	class JET_invalid_argument : public std::invalid_argument
 	{
 	public:
 		explicit JET_invalid_argument(const char* message) noexcept :std::invalid_argument(message) {}
 	};
 }
 //======================================================================================================
 namespace JET_PRIVATE
 {
 	 JET::assert_function_handler handler;
 }
 //======================================================================================================
 #define JET_ASSERT(condition,message)\
 	do{\
 		if (!(condition))\
 			JET_PRIVATE::handler( __FILE__, __LINE__, message); \
 	}while(0)

 #endif
