#include<bits/stdc++.h>

using namespace std;

int nd;

struct node
{
    bool endmark;
    node* next[60];

    node()
    {
        endmark = false;
        for (int i = 0; i < 52; i++)
            next[i] = NULL;
    }
} * root;

void insert(string str, int len)
{
    node* curr = root;

    for (int i = 0; i < len; i++)
    {
        int id;

        if(str[i]>='a' && str[i]<='z') id = str[i] - 'a';
        else  id = str[i] - 'A' + 26;

        if (curr->next[id] == NULL)
        {
            curr->next[id] = new node();
            nd++;
        }

        curr = curr->next[id];
    }
    curr->endmark = true;
}
void del(node* cur)
{
    for (int i = 0; i < 52; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}
int main()
{
    int t;
    char str[10005];

    scanf("%d",&t);

    while(t--)
    {
        memset(str,'\0',sizeof str);
        root = new node();
        nd = 0;

        scanf("%s", str);
        int sz = strlen(str);

        string ss;
        string s(str);
        s = str;

        for(int i=0; i<sz; i++)
        {
            ss = s.substr(i);
            int ssz = ss.size();
            insert(ss, ssz);
        }
        printf("%d\n", nd);
        del(root);

    }
}
