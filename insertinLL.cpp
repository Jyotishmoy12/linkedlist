void insertatposition(Node*&tail,Node *&head,int position, int d){
   //insert at start
   if(position==1){
    insertathead(head,d);
    return;
   }
   
  

   Node*temp=head;
   int cnt=1;
   while(cnt<position-1){
    temp=temp->next;
    cnt++;
   }

//insert at last position

   if(temp->next==NULL){
    insertattail(tail,d);
    return;
   }

//insert a node for d

   Node* nodeToInsert=new Node(d);
   nodeToInsert->next=temp->next;
   temp->next=nodeToInsert;

}
