/** \file
 *  This C++ header file was generated by $ANTLR version 3.5.2
 *
 *     -  From the grammar source file : SimpleBashSQL.g
 *     -                            On : 2015-10-23 01:44:42
 *     -                for the parser : SimpleBashSQLParserParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C++ language generator and runtime by Gokulakannan Somasundaram ( heavy lifting from C Run-time by Jim Idle )
 *
 *
 * The parser SimpleBashSQLParser has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Gokulakannan Somasundaram. 
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_SimpleBashSQLParser_H
#define _SimpleBashSQLParser_H
/* =============================================================================
 * Standard antlr3 C++ runtime definitions
 */
#include <antlr3.hpp>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */




#ifndef MYHEAD
#define MYHEAD
 #include "SimpleBashSQLLexer.hpp" 
 #include <assert.h>
 #include <iostream>
 #include "thequery.hpp"
 using namespace std;

#endif


#ifdef	WIN32
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

typedef SimpleBashSQLParserTraits SimpleBashSQLParserImplTraits;


class SimpleBashSQLParserTokens
{
public:
	/** Symbolic definitions of all the tokens that the parser will work with.
	 *
	 * Antlr will define EOF, but we can't use that as it it is too common in
	 * in C header files and that would be confusing. There is no way to filter this out at the moment
	 * so we just undef it here for now. That isn't the value we get back from C recognizers
	 * anyway. We are looking for ANTLR_TOKEN_EOF.
	 */
	enum Tokens 
	{
		EOF_TOKEN = SimpleBashSQLParserImplTraits::CommonTokenType::TOKEN_EOF
		, T__16 = 16 
		, T__17 = 17 
		, T__18 = 18 
		, T__19 = 19 
		, T__20 = 20 
		, T__21 = 21 
		, T__22 = 22 
		, T__23 = 23 
		, T__24 = 24 
		, T__25 = 25 
		, T__26 = 26 
		, T__27 = 27 
		, T__28 = 28 
		, T__29 = 29 
		, T__30 = 30 
		, T__31 = 31 
		, T__32 = 32 
		, T__33 = 33 
		, T__34 = 34 
		, T__35 = 35 
		, T__36 = 36 
		, T__37 = 37 
		, T__38 = 38 
		, T__39 = 39 
		, T__40 = 40 
		, T__41 = 41 
		, T__42 = 42 
		, T__43 = 43 
		, T__44 = 44 
		, T__45 = 45 
		, T__46 = 46 
		, T__47 = 47 
		, T__48 = 48 
		, T__49 = 49 
		, T__50 = 50 
		, T__51 = 51 
		, T__52 = 52 
		, T__53 = 53 
		, T__54 = 54 
		, T__55 = 55 
		, T__56 = 56 
		, T__57 = 57 
		, T__58 = 58 
		, T__59 = 59 
		, T__60 = 60 
		, T__61 = 61 
		, T__62 = 62 
		, T__63 = 63 
		, T__64 = 64 
		, T__65 = 65 
		, T__66 = 66 
		, T__67 = 67 
		, T__68 = 68 
		, T__69 = 69 
		, T__70 = 70 
		, T__71 = 71 
		, T__72 = 72 
		, T__73 = 73 
		, T__74 = 74 
		, T__75 = 75 
		, T__76 = 76 
		, T__77 = 77 
		, T__78 = 78 
		, T__79 = 79 
		, T__80 = 80 
		, T__81 = 81 
		, T__82 = 82 
		, T__83 = 83 
		, T__84 = 84 
		, ALCHAR = 4 
		, ALPHA = 5 
		, COMMENT = 6 
		, DIGIT = 7 
		, ESCAPED = 8 
		, LETTER = 9 
		, NUMBER = 10 
		, OPTS = 11 
		, PIPE = 12 
		, SONDER = 13 
		, WHITESPACE = 14 
		, WORD = 15 
	};

};

/** Context tracking structure for SimpleBashSQLParser
 */
class SimpleBashSQLParser : public SimpleBashSQLParserImplTraits::BaseParserType, public SimpleBashSQLParserTokens
{
public:
	typedef SimpleBashSQLParserImplTraits ImplTraits;
	typedef SimpleBashSQLParser ComponentType;
	typedef ComponentType::StreamType StreamType;
	typedef SimpleBashSQLParserImplTraits::BaseParserType BaseType;
	typedef ImplTraits::RecognizerSharedStateType<StreamType> RecognizerSharedStateType;
	typedef StreamType InputType;
	static const bool IsFiltered = false;


private:	
public:
    SimpleBashSQLParser(InputType* instream);
    SimpleBashSQLParser(InputType* instream, RecognizerSharedStateType* state);

    void init(InputType* instream  );


    struct comment_return : public SimpleBashSQLParserImplTraits::RuleReturnValueType
    {
    public:
        typedef SimpleBashSQLParserImplTraits::RuleReturnValueType BaseType;
        comment_return()
            : BaseType()
            { init(); }
        comment_return( BaseParserType* parser )
            : BaseType(parser)
            { init(); }
        comment_return( const comment_return& other )
            : BaseType(other)
        { copy(other); }
        ~comment_return()
        {
        }

        comment_return&
        operator=( const comment_return& other )
        {
            BaseType::operator=( other );
            copy(other);    
        	return *this;
        }
        void init() {  }
        void copy( const comment_return& other) {  }    
    };


    struct command_return : public SimpleBashSQLParserImplTraits::RuleReturnValueType
    {
    public:
        typedef SimpleBashSQLParserImplTraits::RuleReturnValueType BaseType;
        command_return()
            : BaseType()
            { init(); }
        command_return( BaseParserType* parser )
            : BaseType(parser)
            { init(); }
        command_return( const command_return& other )
            : BaseType(other)
        { copy(other); }
        ~command_return()
        {
        }

        command_return&
        operator=( const command_return& other )
        {
            BaseType::operator=( other );
            copy(other);    
        	return *this;
        }
        void init() {  }
        void copy( const command_return& other) {  }    
    };


    struct for_header_return : public SimpleBashSQLParserImplTraits::RuleReturnValueType
    {
    public:
        typedef SimpleBashSQLParserImplTraits::RuleReturnValueType BaseType;
        for_header_return()
            : BaseType()
            { init(); }
        for_header_return( BaseParserType* parser )
            : BaseType(parser)
            { init(); }
        for_header_return( const for_header_return& other )
            : BaseType(other)
        { copy(other); }
        ~for_header_return()
        {
        }

        for_header_return&
        operator=( const for_header_return& other )
        {
            BaseType::operator=( other );
            copy(other);    
        	return *this;
        }
        void init() {  }
        void copy( const for_header_return& other) {  }    
    };


    struct awkpatternparsed_return : public SimpleBashSQLParserImplTraits::RuleReturnValueType
    {
    public:
        typedef SimpleBashSQLParserImplTraits::RuleReturnValueType BaseType;
        awkpatternparsed_return()
            : BaseType()
            { init(); }
        awkpatternparsed_return( BaseParserType* parser )
            : BaseType(parser)
            { init(); }
        awkpatternparsed_return( const awkpatternparsed_return& other )
            : BaseType(other)
        { copy(other); }
        ~awkpatternparsed_return()
        {
        }

        awkpatternparsed_return&
        operator=( const awkpatternparsed_return& other )
        {
            BaseType::operator=( other );
            copy(other);    
        	return *this;
        }
        void init() {  }
        void copy( const awkpatternparsed_return& other) {  }    
    };


    struct awkmath_return : public SimpleBashSQLParserImplTraits::RuleReturnValueType
    {
    public:
        typedef SimpleBashSQLParserImplTraits::RuleReturnValueType BaseType;
        awkmath_return()
            : BaseType()
            { init(); }
        awkmath_return( BaseParserType* parser )
            : BaseType(parser)
            { init(); }
        awkmath_return( const awkmath_return& other )
            : BaseType(other)
        { copy(other); }
        ~awkmath_return()
        {
        }

        awkmath_return&
        operator=( const awkmath_return& other )
        {
            BaseType::operator=( other );
            copy(other);    
        	return *this;
        }
        void init() {  }
        void copy( const awkmath_return& other) {  }    
    };


    struct awkexpr_return : public SimpleBashSQLParserImplTraits::RuleReturnValueType
    {
    public:
        typedef SimpleBashSQLParserImplTraits::RuleReturnValueType BaseType;
        awkexpr_return()
            : BaseType()
            { init(); }
        awkexpr_return( BaseParserType* parser )
            : BaseType(parser)
            { init(); }
        awkexpr_return( const awkexpr_return& other )
            : BaseType(other)
        { copy(other); }
        ~awkexpr_return()
        {
        }

        awkexpr_return&
        operator=( const awkexpr_return& other )
        {
            BaseType::operator=( other );
            copy(other);    
        	return *this;
        }
        void init() {  }
        void copy( const awkexpr_return& other) {  }    
    };


    struct number_return : public SimpleBashSQLParserImplTraits::RuleReturnValueType
    {
    public:
        typedef SimpleBashSQLParserImplTraits::RuleReturnValueType BaseType;
        number_return()
            : BaseType()
            { init(); }
        number_return( BaseParserType* parser )
            : BaseType(parser)
            { init(); }
        number_return( const number_return& other )
            : BaseType(other)
        { copy(other); }
        ~number_return()
        {
        }

        number_return&
        operator=( const number_return& other )
        {
            BaseType::operator=( other );
            copy(other);    
        	return *this;
        }
        void init() {  }
        void copy( const number_return& other) {  }    
    };


    struct word_return : public SimpleBashSQLParserImplTraits::RuleReturnValueType
    {
    public:
        typedef SimpleBashSQLParserImplTraits::RuleReturnValueType BaseType;
        word_return()
            : BaseType()
            { init(); }
        word_return( BaseParserType* parser )
            : BaseType(parser)
            { init(); }
        word_return( const word_return& other )
            : BaseType(other)
        { copy(other); }
        ~word_return()
        {
        }

        word_return&
        operator=( const word_return& other )
        {
            BaseType::operator=( other );
            copy(other);    
        	return *this;
        }
        void init() {  }
        void copy( const word_return& other) {  }    
    };


    struct opts_return : public SimpleBashSQLParserImplTraits::RuleReturnValueType
    {
    public:
        typedef SimpleBashSQLParserImplTraits::RuleReturnValueType BaseType;
        opts_return()
            : BaseType()
            { init(); }
        opts_return( BaseParserType* parser )
            : BaseType(parser)
            { init(); }
        opts_return( const opts_return& other )
            : BaseType(other)
        { copy(other); }
        ~opts_return()
        {
        }

        opts_return&
        operator=( const opts_return& other )
        {
            BaseType::operator=( other );
            copy(other);    
        	return *this;
        }
        void init() {  }
        void copy( const opts_return& other) {  }    
    };



     void file (); 
     void newline (); 
     SimpleBashSQLParser::comment_return comment (); 
     void simple_list (bool isSub); 
     void pipeline_cmd (bool isSub); 
     SimpleBashSQLParser::command_return command (); 
     void subshell (); 
     void compound_list (bool isSubshell); 
     void redirection (); 
     void to_redir (); 
     string from_redir (); 
     void other_redir (); 
     void shell_cmd (); 
     void for_command (); 
     SimpleBashSQLParser::for_header_return for_header (); 
     void if_command (); 
     void group_command (); 
     void function_def (); 
     void case_command (); 
     void case_clause (); 
     TheQuery * cmd (); 
     void assignment (); 
     void awkbody (TheQuery* r); 
     string awkpattern (); 
     SimpleBashSQLParser::awkpatternparsed_return awkpatternparsed (); 
     void awkcmds (TheQuery* r); 
     void awkop (map<std::string,std::string> &vm); 
     SimpleBashSQLParser::awkmath_return awkmath (); 
     void awklist (map<std::string,std::string> &vm, TheQuery* r); 
     void awkif (TheQuery* r); 
     SimpleBashSQLParser::awkexpr_return awkexpr (); 
     void pattern (); 
     SimpleBashSQLParser::number_return number (); 
     SimpleBashSQLParser::word_return word (); 
     SimpleBashSQLParser::opts_return opts (); 
     void alchar (); 
    // Delegated rules

    const char *    getGrammarFileName();
    void            reset();
    ~SimpleBashSQLParser();

};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//

/* End of token definitions for SimpleBashSQLParser
 * =============================================================================
 */


#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
