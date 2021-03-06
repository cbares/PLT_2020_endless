#include "StellarSystem.h"

using namespace state;

int sysID = 0;

//Constructeur + destructeur
StellarSystem::StellarSystem() {
	this->nb_planets = 1;
	this->IsCaptured = false;
	this->systemID = sysID;
	sysID = sysID + 1;
	// this->planet_list.push_back(new_planet); ajouter au constructeur un argument planet ?
	// this->building_list.push_back(new_building); same
}

StellarSystem::~StellarSystem() {}

// Setters et getters

int StellarSystem::getNb_planets() const {
	return this->nb_planets;
}
void StellarSystem::setNb_planets(int nb_planets) {
	this->nb_planets = nb_planets;
}

const std::string& StellarSystem::getOwner() const {
	return this->owner;
}
void StellarSystem::setOwner(const std::string& owner) {
	this->owner = owner;
}

bool StellarSystem::getIsCaptured() const {
	return this->IsCaptured;
}
void StellarSystem::setIsCaptured(bool IsCaptured) {
	this->IsCaptured = IsCaptured;
}

int StellarSystem::getSystemID() const {
	return this->systemID;
}
void StellarSystem::setSystemID(int systemID) {
	this->systemID = systemID;
}

const std::vector<Planet>& StellarSystem::getPlanet_list() const {
	return this->planet_list;
}
void StellarSystem::setPlanet_list(const std::vector<Planet>& planet_list) {
	this->planet_list = planet_list;
}

const std::vector<Building>& StellarSystem::getBuilding_list() const { 
	return this->building_list;
}
void StellarSystem::setBuilding_list(const std::vector<Building>& building_list) {
	this->building_list = building_list;
}

//Autres méthodes

void StellarSystem::add_planet_list(Planet planet) {
	this->planet_list.push_back(planet);
}

// Fonction pour le render ?
//void see_stellarsys() {}

/*bool StellarSystem::colonize(Planet *planet) {
	if (planet->get_statut() != 1) {
		return false;
	}
	else {
		return true;
	}
} A DECOMMENTER QUAND PLANET.CPP EST GOOD*/

//Pas sûr que ce soit nécessaire
//bool upgradeBuilding (Building building) {}

