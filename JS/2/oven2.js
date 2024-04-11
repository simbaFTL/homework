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
  
  class ImprovedOven extends OvenClass {
    constructor(maxTemperature) {
      super(maxTemperature);
      this.isOn = false;
      this.currentTemperature = 0;
    }
  
    turnOn() {
      console.log('Печь включена. Начинается нагрев.');
      this.isOn = true;
      this.heatUp();
    }
  
    heatUp() {
      if (this.currentTemperature < this.maxTemperature) {
        this.currentTemperature++;
        console.log(`Температура печи: ${this.currentTemperature} единиц`);
        setTimeout(() => {
          this.heatUp();
        }, 500);
      } else {
        console.log('Печь полностью нагрета.');
        this.turnOff();
      }
    }
  
    turnOff() {
      console.log('Печь выключается. Начинается охлаждение.');
      this.isOn = false;
      this.coolDown();
    }
  
    coolDown() {
      if (this.currentTemperature > 0) {
        this.currentTemperature--;
        console.log(`Температура печи: ${this.currentTemperature} единиц`);
        setTimeout(() => {
          this.coolDown();
        }, 500);
      } else {
        console.log('Печь остыла.');
      }
    }
  }
  
  const myImprovedOven = new ImprovedOven(12);
  
  console.log(`Максимальная температура печи: ${myImprovedOven.maxTemperature} единиц`);
  
  myImprovedOven.turnOn();