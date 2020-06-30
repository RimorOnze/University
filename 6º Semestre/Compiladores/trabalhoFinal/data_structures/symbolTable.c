#include "hashtable.h"
#include <stdlib.h>


struct Node * ST_insert(char *id, ST_Data data, struct Node * hashTable[])
{
    return * hashTable = insert(id, data, hashTable);
}

ST_Data ST_lookup(char *id)
{ 
    ST_Data data = search(id, function);

    if(data != NULL)
    {
        return data;
    }
    
    data = search(id, global);
    return data;
}

ST_Data ST_lookup_local(char *id)
{
    return search(id, function);
}

int ST_new_scope()
{    
    return 0;
}

int ST_discard()
{
    for( int i = 0; i < SIZE; i++ )
    {
        free(function[i]);
    }

    return 0;
}