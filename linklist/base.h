struct Node{
   int data;
   struct Node *next;
};
void push(struct Node** h_ref, int new_data){
   struct Node* new_node = (struct Node * )malloc(sizeof(struct Node ));
   new_node->data = new_data;
   new_node->next = (*h_ref);
   (*h_ref) = new_node;
}

void p(struct Node *head){
   while(head != NULL){
      printf(" %d ",head->data);
      head = head->next;
   }
   printf("\n");
}