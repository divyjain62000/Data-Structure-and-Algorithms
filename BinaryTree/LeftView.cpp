class Solution
{
vector<int> leftView(Node *root)
{
   vector<int> res;
   if(root==NULL) return res; //Base condition
   queue<Node*> q;
   bool isFirst=true;

   /*Initially push root and NULL into queue*/
   q.push(root);
   q.push(NULL);


   while(!q.empty())
   {
       Node* t=q.front();
       q.pop();

      /*Check if element is First then we push into result vector*/
       if(isFirst==true)
       {
           res.push_back(t->data);
           isFirst=false;
       }
  
      /*If queue is not empty and element is NULL means level of tree got change so definately whatever the next element is first element
         thats why we set isFirst=true and also push NULL in queue*/
       if(q.size()!=0 && t==NULL)
       {
           q.push(NULL);
           isFirst=true;
       }
       else //and if element is not null then we simply check if its left exists we push in queue and if right exists we push in queue
       {
            if(t!=NULL && t->left!=NULL) q.push(t->left);
            if(t!=NULL && t->right!=NULL) q.push(t->right);
       }
   }
   return res;
}
};