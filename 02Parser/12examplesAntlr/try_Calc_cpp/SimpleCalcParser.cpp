/** \file
 *  This C++ source file was generated by $ANTLR version 3.5.2
 *
 *     -  From the grammar source file : SimpleCalc.g
 *     -                            On : 2014-09-18 14:23:49
 *     -                for the parser : SimpleCalcParserParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C++ language generator and runtime by Gokulakannan Somasundaram ( heavy lifting from C Run-time by Jim Idle )
 *
 *
*/
// [The "BSD license"]
// Copyright (c) 2005-2009 Gokulakannan Somasundaram, ElectronDB
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

/* -----------------------------------------
 * Include the ANTLR3 generated header file.
 */
#include    "SimpleCalcParser.hpp"
/* ----------------------------------------- */


/* ============================================================================= */

/* =============================================================================
 * Start of recognizer
 */

using namespace antlr3;
/** \brief Table of all token names in symbolic order, mainly used for
 *         error reporting.
 */
ANTLR_UINT8* SimpleCalcParserTokenNames[7+4]
     = {
        (ANTLR_UINT8*) "<invalid>",       /* String to print to indicate an invalid token */
        (ANTLR_UINT8*) "<EOR>",
        (ANTLR_UINT8*) "<DOWN>",
        (ANTLR_UINT8*) "<UP>",
        (ANTLR_UINT8*) "DIGIT",
        (ANTLR_UINT8*) "DIV",
        (ANTLR_UINT8*) "MINUS",
        (ANTLR_UINT8*) "MULT",
        (ANTLR_UINT8*) "NUMBER",
        (ANTLR_UINT8*) "PLUS",
        (ANTLR_UINT8*) "WHITESPACE"
       };


/** \brief Name of the grammar file that generated this code
 */
static const char fileName[] = "SimpleCalc.g";

/** \brief Return the name of the grammar file that generated this code.
 */
const char* SimpleCalcParser::getGrammarFileName()
{
	return fileName;
}
/** \brief Create a new SimpleCalcParser parser and return a context for it.
 *
 * \param[in] instream Pointer to an input stream interface.
 *
 * \return Pointer to new parser context upon success.
 */
SimpleCalcParser::SimpleCalcParser( StreamType* instream)
    :ImplTraits::BaseParserType(ANTLR_SIZE_HINT, instream, NULL)

{
	// See if we can create a new parser with the standard constructor
	//
	this->init(instream);
}

/** \brief Create a new SimpleCalcParser parser and return a context for it.
 *
 * \param[in] instream Pointer to an input stream interface.
 *
 * \return Pointer to new parser context upon success.
 */
SimpleCalcParser::SimpleCalcParser( StreamType* instream, RecognizerSharedStateType* state)
    :ImplTraits::BaseParserType(ANTLR_SIZE_HINT, instream, state)

{
	this->init(instream );
}

void SimpleCalcParser::init(StreamType* instream)
{
	/* Install the token table
	*/
	this->get_psrstate()->set_tokenNames( SimpleCalcParserTokenNames );


}

void
SimpleCalcParser::reset()
{
    this->get_rec()->reset();
}

/** Free the parser resources
 */
SimpleCalcParser::~SimpleCalcParser()
 {
}

/** Return token names used by this parser
 *
 * The returned pointer is used as an index into the token names table (using the token
 * number as the index).
 *
 * \return Pointer to first char * in the table.
 */
static ANTLR_UINT8**	getTokenNames()
{
        return SimpleCalcParserTokenNames;
}


     
     #include "SimpleCalcLexer.hpp"
     
     int main(int argc, char * argv[])
     {
        pANTLR3_INPUT_STREAM           input;
        pSimpleCalcLexer               lex;
        pANTLR3_COMMON_TOKEN_STREAM    tokens;
        pSimpleCalcParser              parser;
        input = antlr3FileStreamNew ((pANTLR3_UINT8)argv[1], ANTLR3_ENC_8BIT);
        //input  = antlr3AsciiFileStreamNew          ((pANTLR3_UINT8)argv[1]);
        lex    = SimpleCalcLexerNew                (input);
        tokens = antlr3CommonTokenStreamSourceNew  (ANTLR3_SIZE_HINT, TOKENSOURCE(lex));
        parser = SimpleCalcParserNew               (tokens);
     
        parser  ->expr(parser);
     
        // Must manually clean up
        //
        parser ->free(parser);
        tokens ->free(tokens);
        lex    ->free(lex);
        input  ->close(input);
     
        return 0;
     }
     


/* Declare the bitsets
 */
/** Bitset defining follow set for error recovery in rule state: SimpleCalcParser  */
static	ANTLR_BITWORD FOLLOW_term_in_expr102_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000242) };
static  SimpleCalcParserImplTraits::BitsetListType FOLLOW_term_in_expr102( FOLLOW_term_in_expr102_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: SimpleCalcParser  */
static	ANTLR_BITWORD FOLLOW_set_in_expr108_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000100) };
static  SimpleCalcParserImplTraits::BitsetListType FOLLOW_set_in_expr108( FOLLOW_set_in_expr108_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: SimpleCalcParser  */
static	ANTLR_BITWORD FOLLOW_term_in_expr119_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000242) };
static  SimpleCalcParserImplTraits::BitsetListType FOLLOW_term_in_expr119( FOLLOW_term_in_expr119_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: SimpleCalcParser  */
static	ANTLR_BITWORD FOLLOW_factor_in_term145_bits[]	= { ANTLR_UINT64_LIT(0x00000000000000A2) };
static  SimpleCalcParserImplTraits::BitsetListType FOLLOW_factor_in_term145( FOLLOW_factor_in_term145_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: SimpleCalcParser  */
static	ANTLR_BITWORD FOLLOW_set_in_term149_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000100) };
static  SimpleCalcParserImplTraits::BitsetListType FOLLOW_set_in_term149( FOLLOW_set_in_term149_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: SimpleCalcParser  */
static	ANTLR_BITWORD FOLLOW_factor_in_term162_bits[]	= { ANTLR_UINT64_LIT(0x00000000000000A2) };
static  SimpleCalcParserImplTraits::BitsetListType FOLLOW_factor_in_term162( FOLLOW_factor_in_term162_bits, 1 );
/** Bitset defining follow set for error recovery in rule state: SimpleCalcParser  */
static	ANTLR_BITWORD FOLLOW_NUMBER_in_factor184_bits[]	= { ANTLR_UINT64_LIT(0x0000000000000002) };
static  SimpleCalcParserImplTraits::BitsetListType FOLLOW_NUMBER_in_factor184( FOLLOW_NUMBER_in_factor184_bits, 1 );


/* ==============================================
 * Parsing rules
 */
/**
 * $ANTLR start expr
 * SimpleCalc.g:51:1: expr : term ( ( PLUS | MINUS ) term )* ;
 */
void
SimpleCalcParser::expr()
{
        SimpleCalcParserImplTraits::RuleReturnValueType _antlr_rule_exit(this);
      

    /* Initialize rule variables
     */


 
    {
        // SimpleCalc.g:51:9: ( term ( ( PLUS | MINUS ) term )* )
        // SimpleCalc.g:51:11: term ( ( PLUS | MINUS ) term )*
        {
            this->followPush(FOLLOW_term_in_expr102);
            term();

            this->followPop();
            if  (this->hasException())
            {
                goto ruleexprEx;
            }


            // SimpleCalc.g:51:18: ( ( PLUS | MINUS ) term )*

            for (;;)
            {
                int alt1=2;
                switch ( this->LA(1) )
                {
                case MINUS:
                case PLUS:
                	{
                		alt1=1;
                	}
                    break;

                }

                switch (alt1)
                {
            	case 1:
            	    // SimpleCalc.g:51:20: ( PLUS | MINUS ) term
            	    {
            	        if ( this->LA(1) == MINUS || this->LA(1) == PLUS )
            	        {
            	            this->consume();
            	            this->set_perror_recovery(false);
            	        }
            	        else
            	        {
            	            new ANTLR_Exception< SimpleCalcParserImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );
            	            this->get_exception()->set_expectingSet(NULL);

            	            goto ruleexprEx;
            	        }


            	        this->followPush(FOLLOW_term_in_expr119);
            	        term();

            	        this->followPop();
            	        if  (this->hasException())
            	        {
            	            goto ruleexprEx;
            	        }


            	    }
            	    break;

            	default:
            	    goto loop1;	/* break out of the loop */
            	    break;
                }
            }
            loop1: ; /* Jump out to here if this rule does not match */


        }

    }
    // This is where rules clean up and exit
    //
    goto ruleexprEx; /* Prevent compiler warnings */
    ruleexprEx: ;


    	if (this->hasException())
        {
            this->preporterror();
            this->precover();
        }
    return ;
}
/* $ANTLR end expr */

/**
 * $ANTLR start term
 * SimpleCalc.g:54:1: term : factor ( ( MULT | DIV ) factor )* ;
 */
void
SimpleCalcParser::term()
{
        SimpleCalcParserImplTraits::RuleReturnValueType _antlr_rule_exit(this);
      

    /* Initialize rule variables
     */


 
    {
        // SimpleCalc.g:54:9: ( factor ( ( MULT | DIV ) factor )* )
        // SimpleCalc.g:54:11: factor ( ( MULT | DIV ) factor )*
        {
            this->followPush(FOLLOW_factor_in_term145);
            factor();

            this->followPop();
            if  (this->hasException())
            {
                goto ruletermEx;
            }


            // SimpleCalc.g:54:18: ( ( MULT | DIV ) factor )*

            for (;;)
            {
                int alt2=2;
                switch ( this->LA(1) )
                {
                case DIV:
                case MULT:
                	{
                		alt2=1;
                	}
                    break;

                }

                switch (alt2)
                {
            	case 1:
            	    // SimpleCalc.g:54:20: ( MULT | DIV ) factor
            	    {
            	        if ( this->LA(1) == DIV || this->LA(1) == MULT )
            	        {
            	            this->consume();
            	            this->set_perror_recovery(false);
            	        }
            	        else
            	        {
            	            new ANTLR_Exception< SimpleCalcParserImplTraits, MISMATCHED_SET_EXCEPTION, StreamType>( this->get_rec(), "" );
            	            this->get_exception()->set_expectingSet(NULL);

            	            goto ruletermEx;
            	        }


            	        this->followPush(FOLLOW_factor_in_term162);
            	        factor();

            	        this->followPop();
            	        if  (this->hasException())
            	        {
            	            goto ruletermEx;
            	        }


            	    }
            	    break;

            	default:
            	    goto loop2;	/* break out of the loop */
            	    break;
                }
            }
            loop2: ; /* Jump out to here if this rule does not match */


        }

    }
    // This is where rules clean up and exit
    //
    goto ruletermEx; /* Prevent compiler warnings */
    ruletermEx: ;


    	if (this->hasException())
        {
            this->preporterror();
            this->precover();
        }
    return ;
}
/* $ANTLR end term */

/**
 * $ANTLR start factor
 * SimpleCalc.g:57:1: factor : NUMBER ;
 */
void
SimpleCalcParser::factor()
{
        SimpleCalcParserImplTraits::RuleReturnValueType _antlr_rule_exit(this);
      

    /* Initialize rule variables
     */


 
    {
        // SimpleCalc.g:57:9: ( NUMBER )
        // SimpleCalc.g:57:11: NUMBER
        {
             this->matchToken(NUMBER, &FOLLOW_NUMBER_in_factor184);
            if  (this->hasException())
            {
                goto rulefactorEx;
            }


        }

    }
    // This is where rules clean up and exit
    //
    goto rulefactorEx; /* Prevent compiler warnings */
    rulefactorEx: ;


    	if (this->hasException())
        {
            this->preporterror();
            this->precover();
        }
    return ;
}
/* $ANTLR end factor */
/* End of parsing rules
 * ==============================================
 */

/* ==============================================
 * Syntactic predicates
 */
/* End of syntactic predicates
 * ==============================================
 */



/* End of code
 * =============================================================================
 */
