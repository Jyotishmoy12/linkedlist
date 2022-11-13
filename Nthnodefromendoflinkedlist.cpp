int getNthFromLast(Node *head, int n)
{
    struct Node*temp=head;
    struct Node*temp1=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    if(n>cnt)
    return -1;
    cnt=cnt-n;
    for(int i=0;i<cnt;i++)
        temp1=temp1->next;
        return temp1->data;
    
}
