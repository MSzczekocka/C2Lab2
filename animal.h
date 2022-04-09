#pragma once
#include "safari.h"
#include <iostream>
#include "Vector2D.h"
class Animal{
private:
    Vector2D Pos;
    Vector2D Direction;
    float speed;
public:
    const Vector2D &GetPos() const {
        return Pos;
    }
    void setPos(const Vector2D &pos) {
        Pos = pos;
    }

    const Vector2D &getDirection() const {
        return Direction;
    }
    void setDirection(const Vector2D &direction) {
        Direction = direction;
    }

    float getSpeed() const {
        return speed;
    }
    void setSpeed(float speed) {
        Animal::speed = speed;
    }

    Animal(const Vector2D pos = Vector2D(1,1),const Vector2D dir = Vector2D(1,1), const float speed = 0):
    Pos(pos), Direction(dir.normalize()), speed(speed){}

    virtual void Show() {
        std::cout << "Position: ";
        Pos.Show();
        std::cout << "Direction: ";
        Direction.Show();
        std::cout << "Speed: " << speed << std::endl;
	}
	

//	virtual void Do(Safari& safari) = 0;

    virtual Vector2D& Run() {
        return Pos;
    };
};

class Lion :public Animal{
private:
    Vector2D Pos;
    Vector2D Direction;
    float speed;
public:
    const Vector2D &getPos() const {
        return Pos;
    }
    void setPos1(const Vector2D &pos) {
        Pos = pos;
    }

    const Vector2D &getDirection1() const {
        return Direction;
    }
    void setDirection1(const Vector2D &direction) {
        Direction = direction;
    }

    float getSpeed1() const {
        return speed;
    }
    void setSpeed1(float speed) {
        Lion::speed = speed;
    }

    Lion(const Vector2D pos = Vector2D(1,1),const Vector2D dir = Vector2D(1,1), float speed = 10.0)
    : Pos(pos), Direction(dir.normalize()){
        this->speed = 10.0;
    }

    virtual void Show() override {
        std::cout << "Position: ";
        Pos.Show();
        std::cout << "Direction: ";
        Direction.Show();
        std::cout << "Speed: " << speed << std::endl;
    }

//    void Do(Safari &safari) override {
//
//    }

    Vector2D &Run() override {
        return Animal::Run();
    }

};

class Gnu :public Animal{
private:
    Vector2D Pos;
    Vector2D Direction;
    float speed;
public:
    const Vector2D &getPos() const {
        return Pos;
    }
    void setPos1(const Vector2D &pos) {
        Pos = pos;
    }

    const Vector2D &getDirection1() const {
        return Direction;
    }
    void setDirection1(const Vector2D &direction) {
        Direction = direction;
    }

    float getSpeed1() const {
        return speed;
    }
    void setSpeed1(float speed) {
        Gnu::speed = speed;
    }

    Gnu(const Vector2D pos = Vector2D(1,1),const Vector2D dir = Vector2D(1,1), float speed = 5.0)
            : Pos(pos), Direction(dir.normalize()){
        this->speed = 5.0;
    }

    virtual void Show() override {
        std::cout << "Position: ";
        Pos.Show();
        std::cout << "Direction: ";
        Direction.Show();
        std::cout << "Speed: " << speed << std::endl;
    }

//    void Do(Safari &safari) override {
//
//    }

    Vector2D &Run() override {
        return Animal::Run();
    }
};

class Hyena :public Animal{
private:
    Vector2D Pos;
    Vector2D Direction;
    float speed;
public:
    Hyena(const Vector2D pos = Vector2D(1,1),const Vector2D dir = Vector2D(1,1), float speed = 1.0){
        Animal(pos, dir);
        this->speed = 1.0;
    }

    const Vector2D &getPos() const {
        return Pos;
    }
    void setPos1(const Vector2D &pos) {
        Pos = pos;
    }

    const Vector2D &getDirection1() const {
        return Direction;
    }
    void setDirection1(const Vector2D &direction) {
        Direction = direction;
    }

    float getSpeed1() const {
        return speed;
    }
    void setSpeed1(float speed) {
        Hyena::speed = speed;
    }

    virtual void Show()  {
        std::cout << "Hyena" << std::endl;
        Animal::Show();
    }

    Vector2D &Run() override {
        return Animal::Run();
    }
};