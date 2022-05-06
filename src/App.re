// ReactDOMRe.renderToElementWithId(<Index />, "app");

switch (ReactDOM.querySelector("#app")) {
| Some(app) => ReactDOM.render(<Greeting name="John" />, app)
| None => ()
}