#include <bits/stdc++.h>
using namespace std;
struct Node{
    int dado;
    Node *esquerda;
    Node *direita;
 
    Node(int valor){
        dado = valor;
        esquerda = nullptr;
        direita = nullptr;
    }
};
 
Node *inserir_no(Node *no_atual, int valor){
    if (no_atual == nullptr){
        return new Node(valor);
    }
 
    if (valor < no_atual->dado){
        no_atual->esquerda = inserir_no(no_atual->esquerda, valor);
    }
    else if (valor > no_atual->dado){
        no_atual->direita = inserir_no(no_atual->direita, valor);
    }
 
    return no_atual;
}
 
 
void inorder(Node *raiz){
    if (raiz == nullptr) return;
 
    inorder(raiz->esquerda);
    
    cout << raiz->dado << " ";
 
    inorder(raiz->direita);
}
 
void pre_order(Node *raiz){
    if (raiz == nullptr) return;
    cout << raiz->dado << " ";
 
    pre_order(raiz->esquerda);
    pre_order(raiz->direita);
}
 
void post_order(Node *raiz){
    if (raiz == nullptr) return;
    post_order(raiz->esquerda);
    post_order(raiz->direita);
 
    cout << raiz->dado << " ";
}
 
int main(){
 
    Node *raiz = nullptr;
 
    int t; cin >> t;
 
    for (int i = 0; i < t; i++){
        int num; cin >> num;
        raiz = inserir_no(raiz, num);
    }
 
    cout << "In.:" << " ";
    inorder(raiz);
    cout << endl;
 
    cout << "Pre:" << " ";
    pre_order(raiz);
    cout << endl;
 
    cout << "Pos:" << " ";
    post_order(raiz);
    cout << endl;
 
    return 0;
}