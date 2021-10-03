#include <iostream>
#include "SentenceReverser.hpp"

using namespace std;

SentenceReverser::SentenceReverser()
{
    stackHead=NULL;
}

SentenceReverser::~SentenceReverser()
{
    //TODO
}

bool SentenceReverser::isEmpty()
{
	
if (stackHead==NULL)
{
    return true;
}else
{
    return false;
}

    
}

void SentenceReverser::push(string word)
{

    Word* nn = new Word;
    nn->word = word;
    if (isEmpty())
    {
        stackHead=nn;
        nn->next=NULL;
    }else
    {
        nn->next=stackHead;
        stackHead=nn;
    }
    
}

string SentenceReverser::pop()
{
    string returner;
    if(!isEmpty())
    {

        Word* temp = stackHead;
        stackHead = stackHead->next;
        returner=temp->word;
        delete temp;
    }else
    {
        cout<<"Stack empty, cannot pop a word."<<endl;
        return "";
        
    }
    return returner;
}

Word* SentenceReverser::peek()
{
    if (isEmpty()==true)
    {
        cout<<"Stack empty, cannot peek."<<endl;
        return NULL;
    }
    else
    {        
        return stackHead;
    }

}

void SentenceReverser::evaluate(string* s, int size)
{
    /*TODO: 1. Scan the array s from start
            2. Check for opening and closing brackets.
            3. Push each element on the stack till you encounter a "]"
            4. Then keep popping (& processing) from the stack till you get a "[".
            5. Handle the boundery cases as required.
            6. Read the writeup for more details. Another example is in Appendix 2.
    */
}
