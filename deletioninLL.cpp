void deleteNode(int position, Node *&head){

    //deleting first or start node
    if(position==1){
      Node*temp=head;
      head=head->next;
      temp->next=NULL;
      delete temp;
    } 
    else{
      //deleting any middle and last node
    Node*curr=head;
    Node*prev=NULL;
    int cnt =1;
    while(cnt<position){
     prev=curr;
     curr=curr->next;
     cnt++;
    }
    prev ->next = curr->next; 
    curr->next= NULL;
    delete curr;
    }
}
