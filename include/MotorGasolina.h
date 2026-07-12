/**
 * @file MotorGasolina.h
 * @brief Declaración de la clase MotorGasolina, motor derivado de Motor.
 *
 * @details
 * Responsabilidades:
 * - Heredar de Motor en una relación "es-un" (MotorGasolina es-un Motor).
 * - Sobrescribir arrancar() y mostrarMotor() con el comportamiento de un motor a gasolina.
 * - Sobrescribir aceptarDiagnostico() para participar en el dispatch doble con DiagnosticSystem.
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

#ifndef MOTOR_GASOLINA_H
#define MOTOR_GASOLINA_H

#include "Motor.h"

// Declaración adelantada; la definición completa solo se necesita en el .cpp.
class DiagnosticSystem;

// Motor de combustión a gasolina.
class MotorGasolina : public Motor {
public:
    // Constructor por defecto.
    MotorGasolina() = default;

    // Destructor por defecto.
    ~MotorGasolina() override = default;

    // Arranca el motor e informa el consumo estimado.
    void arrancar() const override;

    // Muestra los datos técnicos del motor de gasolina.
    void mostrarMotor() const override;

    // Delega el diagnóstico en DiagnosticSystem (dispatch doble).
    void aceptarDiagnostico(DiagnosticSystem& diagnostico) const override;
};

#endif // MOTOR_GASOLINA_H
