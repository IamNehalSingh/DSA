#include<iostream>
using namespace std;
struct trie{
	char data;
	struct gtnode *fc,*ns;
};
typedef struct gtnode *GTPTR;
GTPTR create(string str,int &i)
{
	if(str[i]=='.' || i==str.size())
	return NULL;
		{
			GTPTR temp=new struct gtnode;
			temp->data=str[i];
			i++
			t->fc=create(str,i,);
			t->ns=create(str,i);
			return temp;}
		}
void sibling(GTPTR T,char c){
	if (T=NULL)
	return ;
	else if (t->data==c){
		GTPTR temp=t->ns;
		while (temp){
			cout<<temp->data
		}
	}
}
