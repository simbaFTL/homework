class OvenClass {
    #maxTemperature;
  
    constructor(maxTemperature) {
      this.maxTemperature = maxTemperature;
    }
  
    get maxTemperature() {
      return this._maxTemperature;
    }
  
    set maxTemperature(temperature) {
      if (temperature > 15) {
        this._maxTemperature = 15;
      } else if (temperature < 0) {
        this._maxTemperature = 0;
      } else {
        this._maxTemperature = temperature;
      }
    }
  }
  
  const myOven = new OvenClass(14);
  
  console.log(`Максимальная температура печи: ${myOven.maxTemperature} единиц`);