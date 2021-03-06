/** \file
 *  This C++ header file was generated by $ANTLR version 3.5.2
 *
 *     -  From the grammar source file : SimpleBashSQL.g
 *     -                            On : 2016-01-02 17:30:29
 *     -                 for the lexer : SimpleBashSQLLexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C++ language generator and runtime by Gokulakannan Somasundaram ( heavy lifting from C Run-time by Jim Idle )
 *
 *
 * The lexer SimpleBashSQLLexer has the callable functions (rules) shown below,
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

#ifndef	_SimpleBashSQLLexer_H
#define _SimpleBashSQLLexer_H
/* =============================================================================
 * Standard antlr3 C++ runtime definitions
 */
#include <antlr3.hpp>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */




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


     class  SimpleBashSQLLexer;
     class  SimpleBashSQLParser;
     typedef antlr3::Traits< SimpleBashSQLLexer, SimpleBashSQLParser > SimpleBashSQLLexerTraits;
     typedef SimpleBashSQLLexerTraits SimpleBashSQLParserTraits;

typedef SimpleBashSQLLexerTraits SimpleBashSQLLexerImplTraits;


class SimpleBashSQLLexerTokens
{
public:
	/** Symbolic definitions of all the tokens that the lexer will work with.
	 *
	 * Antlr will define EOF, but we can't use that as it it is too common in
	 * in C header files and that would be confusing. There is no way to filter this out at the moment
	 * so we just undef it here for now. That isn't the value we get back from C recognizers
	 * anyway. We are looking for ANTLR_TOKEN_EOF.
	 */
	enum Tokens 
	{
		EOF_TOKEN = SimpleBashSQLLexerImplTraits::CommonTokenType::TOKEN_EOF
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

/** Context tracking structure for SimpleBashSQLLexer
 */
class SimpleBashSQLLexer : public SimpleBashSQLLexerImplTraits::BaseLexerType, public SimpleBashSQLLexerTokens
{
public:
	typedef SimpleBashSQLLexerImplTraits ImplTraits;
	typedef SimpleBashSQLLexer ComponentType;
	typedef ComponentType::StreamType StreamType;
	typedef SimpleBashSQLLexerImplTraits::BaseLexerType BaseType;
	typedef ImplTraits::RecognizerSharedStateType<StreamType> RecognizerSharedStateType;
	typedef StreamType InputType;
	static const bool IsFiltered = false;


private:	
public:
    SimpleBashSQLLexer(InputType* instream);
    SimpleBashSQLLexer(InputType* instream, RecognizerSharedStateType* state);

    void init(InputType* instream  );


    
    void  mPIPE( );
    void  mT__16( );
    void  mT__17( );
    void  mT__18( );
    void  mT__19( );
    void  mT__20( );
    void  mT__21( );
    void  mT__22( );
    void  mT__23( );
    void  mT__24( );
    void  mT__25( );
    void  mT__26( );
    void  mT__27( );
    void  mT__28( );
    void  mT__29( );
    void  mT__30( );
    void  mT__31( );
    void  mT__32( );
    void  mT__33( );
    void  mT__34( );
    void  mT__35( );
    void  mT__36( );
    void  mT__37( );
    void  mT__38( );
    void  mT__39( );
    void  mT__40( );
    void  mT__41( );
    void  mT__42( );
    void  mT__43( );
    void  mT__44( );
    void  mT__45( );
    void  mT__46( );
    void  mT__47( );
    void  mT__48( );
    void  mT__49( );
    void  mT__50( );
    void  mT__51( );
    void  mT__52( );
    void  mT__53( );
    void  mT__54( );
    void  mT__55( );
    void  mT__56( );
    void  mT__57( );
    void  mT__58( );
    void  mT__59( );
    void  mT__60( );
    void  mT__61( );
    void  mT__62( );
    void  mT__63( );
    void  mT__64( );
    void  mT__65( );
    void  mT__66( );
    void  mT__67( );
    void  mT__68( );
    void  mT__69( );
    void  mT__70( );
    void  mT__71( );
    void  mT__72( );
    void  mT__73( );
    void  mT__74( );
    void  mT__75( );
    void  mT__76( );
    void  mT__77( );
    void  mT__78( );
    void  mT__79( );
    void  mT__80( );
    void  mT__81( );
    void  mT__82( );
    void  mT__83( );
    void  mT__84( );
    void  mNUMBER( );
    void  mWORD( );
    void  mOPTS( );
    void  mALCHAR( );
    void  mWHITESPACE( );
    void  mCOMMENT( );
    void  mDIGIT( );
    void  mLETTER( );
    void  mALPHA( );
    void  mESCAPED( );
    void  mSONDER( );
    void  mTokens( );
    const char *    getGrammarFileName();
    void            reset();
    ~SimpleBashSQLLexer();

};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//

/* End of token definitions for SimpleBashSQLLexer
 * =============================================================================
 */


#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
