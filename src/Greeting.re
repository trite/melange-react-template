// [@react.component]
// let make = (~name) =>
//   <button> {ReasonReact.string("Hello " ++ name ++ "!")} </button>;

[@react.component]
let make = (~name) => {
  <h1> {React.string("Greetings " ++ name ++ "!")} </h1>;
}