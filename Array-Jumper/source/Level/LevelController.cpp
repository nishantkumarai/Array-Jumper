#include "../../header/Level/LevelController.h"
#include "../../header/Level/LevelView.h"
#include "../../header/Level/LevelData.h"
#include "../../header/Main/GameService.h"

namespace Level
{

	LevelController::LevelController()
	{
		level_model = new LevelModel();
		level_view = new LevelView(this);
	}

	LevelController::~LevelController() { delete(level_view); delete(level_model); }

	void LevelController::initialize()
	{
		level_view->initialize();
	}

	void LevelController::update() { /* Not Implemented */ }

	void LevelController::render()
	{
		level_view->render();
	}

	BoxDimentions LevelController::getBoxDimentions()
	{
		return level_view->getBoxDimentions();
	}

	int LevelController::getCurrentBoxValue(int currentPosition)
	{
		return level_model->getCurrentBoxValue(currentPosition);
	}

	bool LevelController::isLastLevel()
	{
		return level_model->isLastLevel();
	}

	void LevelController::loadNextLevel()
	{
		level_model->loadNextLevel();
	}

	int LevelController::getCurrentLevelNumber()
	{
		return level_model->getCurrentLevelNumber();
	}

	void LevelController::reset()
	{
		level_model->reset();
	}

}