#include <iostream>
#include <vector>
#include <string>

class Item {
public:
    char name;
    int quantity;

    Item(char n, int q) : name(n), quantity(q) {}
};

void printItems(const std::vector<Item>& items) {
    for (int i = 0; i < items.size(); ++i) {
        std::cout << "Item: " << items[i].name << ", Quantity: " << items[i].quantity << std::endl;
    }
}

int main() {
    std::vector<Item> items;
    items.push_back(Item('A', 10));
    items.push_back(Item('B', 5));

    printItems(items);

    return 0;
}

/*Ele define uma classe chamada Item com dois atributos: name (nome do item) e quantity (quantidade do item).
A função printItems exibe os detalhes de cada item em um vetor.
Na função main, são criados dois objetos Item (um com nome ‘A’ e quantidade 10, outro com nome ‘B’ e quantidade 5) e adicionados a um vetor.
Quando o programa é executado, ele mostra no console os nomes e quantidades dos itens.*/