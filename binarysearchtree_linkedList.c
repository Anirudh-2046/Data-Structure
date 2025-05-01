#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    struct treeNode* left;
    int data;
    struct treeNode* right;
}Node;
Node* createNode(int data){
    Node *newNode=(Node*)malloc(sizeof(Node));
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}
Node* insert(Node* root,int value){
    if(root==NULL)
        return createNode(value);
    else if(value<root->data){
        root->left=insert(root->left,value);
    } 
    else if(value>root->data){
        root->right=insert(root->right,value);
    }
}
void preorder(Node* root){
    if(root!=NULL)
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
}
void inorder(Node* root){
    if(root!=NULL)
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
}
void postorder(Node* root){
    if(root!=NULL)
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
}
void levelorder(Node* root){
    Node* queue[100];
    int front=0,rear=0;
    queue[rear++]=root;
    while(front!=rear){
        Node* temp = queue[front++];
        printf("%d ",temp->data);
        if(temp->left!=NULL)
            queue[rear++]=temp->left;
        if(temp->right!=NULL)
            queue[rear++]=temp->right;
    }
}
Node* search(Node* root, int value){
    if(root==NULL)
        return NULL;
    else if(root->data==value)
        return root;
    else if(value<root->data)
        return search(root->left,value);
    else
        return search(root->right,value);
}
Node* findMin(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
Node* delete(Node* root,int value){
    if(root==NULL)
        return NULL;
    else if(value<root->data)
        root->left=delete(root->left,value);    
    else if(value>root->data)
        root->right=delete(root->right,value);
    else{
        if(root->left==NULL && root->right==NULL){//0 child
            free(root);
            return NULL;
        }
        else if(root->right==NULL){//only left child        
            Node* temp=root->left;
            free(root);
            return root->left;
        }
        else if(root->left==NULL){//only right child
            Node* temp=root->right;
            free(root);
            return root->right;
        }
        else{//2 child
            Node* temp=findMin(root->left);
            root->data=temp->data;
            delete(root->right,temp->data);
        }
    }
}
int main(){
    int choice,value;
    Node* root=NULL;
    while(1){
        printf("1.Insert\n");
        printf("2.Preorder\n");
        printf("3.Inorder\n");
        printf("4.Postorder\n");
        printf("5.Leveloreder\n");
        printf("6.Search\n");
        printf("7.Delete\n");
        printf("8.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid Choice!!\n");
        }
        printf("\n");
    }
}