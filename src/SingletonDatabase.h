//
// Created by Maikol Guzman Alan on 4/4/22.
//
#include <cstdlib>
#include <ostream>
#include <sstream>
#include <map>
#include <string>
#include <iostream>
#include <fstream>

#ifndef DP_CREATIONAL_SINGLETON_SINGLETONDATABASE_H
#define DP_CREATIONAL_SINGLETON_SINGLETONDATABASE_H

using namespace std;

class SingletonDatabase {
private:
    map<string, double> products;/**tiene esta característica y es un key. Se recolecta una llave y un valor*/

protected:
    /**
     * The Singleton's constructor should always be private to prevent direct
     * construction calls with the `new` operator.
     */
    SingletonDatabase();/**Prevenir que se instancie la clase*/

public:
    /**
     * Singletons should not be cloneable.
     */
    SingletonDatabase(SingletonDatabase const &) = delete;/**Bloquear en C++ que nuestro Singleton sea copiado. Previene que el objeto sea copiado. Por la sobrecarga del amperson, se previene que se asigne*/
    /**
     * Singletons should not be assignable.
     */
    SingletonDatabase &operator=(SingletonDatabase const &) = delete;

    virtual ~SingletonDatabase();/**liberar al singleton*/

    /**
     * This is the static method that controls the access to the singleton
     * instance. On the first run, it creates a singleton object and places it
     * into the static field. On subsequent runs, it returns the client existing
     * object stored in the static field.
     */
    static SingletonDatabase &getInstance();/**Cree la instancia por primera vez y la siga creando la misma*/
    double getPrice(const string &name);
};


#endif //DP_CREATIONAL_SINGLETON_SINGLETONDATABASE_H
