/**
 * @file Motor.h
 * @brief Declaración de la clase abstracta Motor, clase base de la jerarquía de motores.
 *
 * @details
 * Responsabilidades:
 * - Definir la interfaz común arrancar() y mostrarMotor() como métodos virtuales puros.
 * - Ser clase abstracta: no se pueden instanciar objetos Motor directamente.
 * - Declarar aceptarDiagnostico() para habilitar el dispatch doble con DiagnosticSystem.
 *
 * -----------------------------------------------------------------------------
 * @author Douglas Velez Monginaite | Código 202516737-3743
 * @email douglas.velez@correounivalle.edu.co
 *
 * @author Juan Diego Lopez Gomez | Código 202519861-3743
 * @email juan.lopez.g@correounivalle.edu.co
 *
 * @author Nicolas Andres Ramirez | Código 202415510-3743
 * @email nicolas.andres.ramirez@correounivalle.edu.co
 *
 */

#ifndef MOTOR_H
#define MOTOR_H

// Declaración adelantada para evitar dependencia circular con DiagnosticSystem.
class DiagnosticSystem;

// Clase base abstracta que representa un motor genérico.
class Motor {
public:
    // Constructor por defecto.
    Motor() = default;

    // Destructor virtual, obligatorio al tener métodos virtuales.
    virtual ~Motor() = default;

    // Arranca el motor; cada clase derivada define su propio comportamiento.
    virtual void arrancar() const = 0;

    // Muestra la información técnica del motor.
    virtual void mostrarMotor() const = 0;

    // Habilita el dispatch doble delegando el diagnóstico según el tipo real del motor.
    virtual void aceptarDiagnostico(DiagnosticSystem& diagnostico) const = 0;
};

#endif // MOTOR_H
