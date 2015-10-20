#pragma once

#include "common/Rendering/Material/Material.h"

class BlinnPhongMaterial : public Material
{
public:
    BlinnPhongMaterial();
    virtual glm::vec3 ComputeBRDF(const struct IntersectionState& IntersectionState, const class Light& relevantLight, const class Ray& toLightRay, const class Ray& fromCameraRay) const; 

    void SetDiffuse(glm::vec3 input);
    void SetSpecular(glm::vec3 inputColor, float inputShininess);
private:
    glm::vec3 diffuseColor;
    glm::vec3 specularColor;
    float shininess;
};