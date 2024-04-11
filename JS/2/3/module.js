export function containsJavascript(str) {
    const regex = /javascript/i;
    return regex.test(str);
  }