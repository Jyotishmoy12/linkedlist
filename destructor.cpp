~Node(){
  int value= this->data;
  if(this->next!=NULL){
    delete next;
    this->next=NULL;
  }
  cout<<"memory is free"<<value<<endl;
}
};
