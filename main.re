/* A totally pointless promise-using program. */

/* Prints "Hello, world!" on the tick *after* p resolves. */
let helloWorld = p =>
  p
  |> Repromise.then_(() => {
    print_endline("Hello, world!");
    Repromise.resolve();
  });

let () = {
  /* Schedule printing "Hello, world!" on the *next* tick. */
  Repromise.resolve()
  |> helloWorld
  |> ignore;

  /* Run enough ticks to actually print the message. */
  Io.run();
};
