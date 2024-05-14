class CashRegister {
private:
    bool active;

public:
    CashRegister();

    bool isActive() const;
    void setActive(bool isActive);

    void open();

    void close();
};

