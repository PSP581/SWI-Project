class Warehouse {
private:
    bool operational;

public:
    Warehouse();

    bool isOperational() const;
    void setOperational(bool isOperational);

    void performMaintenance();
};