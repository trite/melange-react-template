// [@react.component]
// let make = (~name) =>
//   <button> {ReasonReact.string("Hello " ++ name ++ "!")} </button>;

[@react.component]
let make = (~message) => <h1> {React.string(message)} </h1>;