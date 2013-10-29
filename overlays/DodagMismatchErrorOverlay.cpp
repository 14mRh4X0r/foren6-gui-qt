#include "DodagMismatchErrorOverlay.h"
#include "../rpl/rplNode.h"
#include "data_info/node.h"

int DodagMismatchErrorOverlay::getErrorCount(rpl::Node *node) {
	di_node_t *node_data = node->getNodeData();
    const rpl_errors_t *rpl_errors = node_get_rpl_errors(node_data);

	return rpl_errors->dodag_mismatch_errors;
}
