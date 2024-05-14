class Goods {
private:
    int quantity;

public:
    Goods(int initialQuantity);

    int getQuantity() const;
    void setQuantity(int newQuantity);

    void updateQuantitySold(int soldQuantity);

    bool isAvailable() const;
};

