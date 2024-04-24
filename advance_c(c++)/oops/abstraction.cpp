// Abstract class
class Vehicle {
public:
    // Abstract method
    virtual void move() = 0; // No implementation
};

// Concrete subclass
class Car : public Vehicle {
public:
    void move() override {
        cout << "Car is moving on the road." << endl;
    }
};

// Concrete subclass
class Plane : public Vehicle {
public:
    void move() override {
        cout << "Plane is flying in the sky." << endl;
    }
};

int main() {
    Car car;
    Plane plane;

    car.move();   
    plane.move(); 

    return 0;
}
