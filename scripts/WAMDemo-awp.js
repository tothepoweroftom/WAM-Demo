/* Declares the WAMDemo Audio Worklet Processor */

class WAMDemo_AWP extends AudioWorkletGlobalScope.WAMProcessor
{
  constructor(options) {
    options = options || {}
    options.mod = AudioWorkletGlobalScope.WAM.WAMDemo;
    super(options);
  }
}

registerProcessor("WAMDemo", WAMDemo_AWP);
