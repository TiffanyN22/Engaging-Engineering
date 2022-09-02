class Hero:
  name = ""
  age = 0
  powerLevel = 0
  powerType = ""
  health = 100

  def __init__(self, name, age, powerLevel, powerType):
    self.name = name
    self.age = age
    self.powerType =  powerType
    self.powerLevel = powerLevel

  def usePower(self, affectedCharacter):
    if self.powerType == "healer":
      if(self.powerLevel >= 5):
        affectedCharacter.health += 5
      else:
        affectedCharacter.health += self.powerLevel
    elif self.powerType == "warrior":
      affectedCharacter.health -= self.powerLevel
      self.health -= self.powerLevel/2