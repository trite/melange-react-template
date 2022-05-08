[@react.component]
let make = (~name) => {
  <h1> {React.string("Greetings... " ++ name ++ "!")} </h1>;
}