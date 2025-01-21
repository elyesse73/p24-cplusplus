struct Integer {
    int value{};
    Integer (int v = 0) : value {v} {};
    void incr () {value = value + 1; }
    void decr () {value = value - 1; }
};

int main() {
    Integer i {-17};
    return 0;
}