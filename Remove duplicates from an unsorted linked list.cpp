Node * removeDuplicates( Node *head) 
    {
     // your code goes here
      if(head==NULL)
            return NULL;
        Node* curr=head;
        map<int,int>visited;
        visited[curr->data]=1;
        Node* prev=curr;
        curr=curr->next;
        while(curr!=NULL)
        {
            if(visited[curr->data])
            {
                prev->next=curr->next;
                delete(curr);
            }
            else
            {
                visited[curr->data]=1;
                prev=curr;
            }
            curr=prev->next;
        }
        return head;
    }
};
