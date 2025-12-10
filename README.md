Add full implementation of menu-driven currency converter program in C

This commit introduces a complete console-based currency converter that allows
users to perform conversions between INR, USD, and EUR using predefined static
exchange rates. The program uses an infinite loop to repeatedly show a detailed
menu until the user chooses to exit, ensuring smooth and continuous interaction.

Key features included:
- Added a structured menu with seven options covering all supported conversions:
  INR <-> USD, USD <-> EUR, and INR <-> EUR.
- Implemented input handling for both the user's menu choice and the amount
  to convert, ensuring clear prompts and readable formatting.
- Added conversion logic with fixed multiplier values for each currency pair.
- Included graceful exit behavior when the user selects option 7.
- Implemented basic validation to notify the user when an invalid option is
  selected, preventing unexpected behavior.
- Ensured consistent and user-friendly output formatting with two decimal places
  for all currency results.

This commit provides the foundational functionality for the converter tool and
sets up a clear structure that can be expanded later with dynamic exchange rates,
error handling improvements, or additional currencies.
